#define ASIO_STANDALONE
#include <asio.hpp>
#include "Utils.h"
#include "Pattern/PatternFinder.h"
#include "../RL/SDK.hpp"
#include <fstream>
#include <map>
#include <iostream>
#include <locale>
#include <codecvt>
using std::string;


namespace Utils {
	bool InitializeObjectsStore() {
		auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"), "x????x??x??xxxxx");
		if (address == -1) { return false; }
		SDK::UObject::GObjects = reinterpret_cast<decltype(SDK::UObject::GObjects)>(*reinterpret_cast<uint32_t*>(address + 1));
		return SDK::UObject::GObjects != nullptr;
	}

	bool InitializeNamesStore() {
		auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x8B\x0D\x00\x00\x00\x00\x83\x3C\x81\x00\x74"), "xx????xxxxx");
		if (address == -1) { return false; }
		SDK::FName::GNames = reinterpret_cast<decltype(SDK::FName::GNames)>(*reinterpret_cast<uint32_t*>(address + 2));
		return SDK::FName::GNames != nullptr;
	}

	SDK::UObject* GetInstanceOf(SDK::UClass* Class) {
		static SDK::UObject* ObjectInstance;
		ObjectInstance = NULL;

		for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
			SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
			if (CheckObject && CheckObject->IsA(Class)) {
				if (!strstr(CheckObject->GetFullName().c_str(), "Default"))
					ObjectInstance = CheckObject;
			}
		}
		return ObjectInstance;
	}

	SDK::FString to_fstring(const std::string& s) {
		wchar_t *p = new wchar_t[s.size() + 1];
		for (std::string::size_type i = 0; i < s.size(); ++i)
			p[i] = s[i];

		p[s.size()] = '\0';
		return SDK::FString(p);
	}

	char* stringToCharArray(const std::string& s) {
		char *cptr = new char[s.length() + 1];
		std::strncpy(cptr, s.c_str(), s.size());
		cptr[s.length()] = '\0';
		return cptr;
	}

	// Returns true if export successful, false if not...
	bool ExportInventory(SDK::USaveData_TA* saveData, std::string outFile) {

		std::ofstream myfile;
		myfile.open(outFile);

		char *Quality[] =
		{
			"Common",
			"Uncommon",
			"Rare",
			"VeryRare",
			"Import",
			"Exotic",
			"BlackMarket",
			"Premium",
			"Limited",
			"MAX"
		};

		std::map<std::string, int> itemTotals;

		if (saveData) {
			printf("Found save data...\n");
			SDK::TArray< class SDK::UOnlineProduct_TA* > products = saveData->OnlineProducts;
			for (int i = 0; i < products.Num(); i++)
			{
				std::string productName = "";
				std::string productPaint = "";
				std::string productCert = "";
				std::string productQuality = "";
				int productQuantity = 1;

				if (products.GetByIndex(i)) {
					//WriteLogFile(to_string(products.Data[i]->ProductID));
					//WriteLogFile(" (");

					SDK::UProductDatabase_TA* prodDB = (SDK::UProductDatabase_TA*)Utils::GetInstanceOf(SDK::UProductDatabase_TA::StaticClass());
					SDK::UCertifiedStatDatabase_TA* certDB = (SDK::UCertifiedStatDatabase_TA*)Utils::GetInstanceOf(SDK::UCertifiedStatDatabase_TA::StaticClass());
					SDK::UPaintDatabase_TA* paintDB = (SDK::UPaintDatabase_TA*)Utils::GetInstanceOf(SDK::UPaintDatabase_TA::StaticClass());

					SDK::FName realProductName = prodDB->GetProductName(products.GetByIndex(i)->ProductID);
					SDK::UProduct_TA* tempProduct = prodDB->GetProductByName(realProductName);
					//WriteLogFile(realProductName.GetName());
					//WriteLogFile(" | ");
					bool exportSetting = 1;
					if (exportSetting == 1)
						productName = tempProduct->GetLongLabel().ToString();
					else
						productName = products.GetByIndex(i)->ProductID;


					SDK::TArray< class SDK::UProductAttribute_TA* > attributes = products.GetByIndex(i)->Attributes;
					if (attributes.IsValidIndex(0) && attributes.Num() > 0) {
						for (int j = 0; j < attributes.Num(); j++)
						{
							if (attributes.GetByIndex(j)) {
								SDK::FOnlineProductAttribute onlineAttribute = attributes.GetByIndex(j)->InstanceOnlineProductAttribute();
								//WriteLogFile(onlineAttribute.Key.GetName());
								//WriteLogFile(" : ");
								//WriteLogFile(to_string(onlineAttribute.Value.Data));
								//std::cout << onlineAttribute.Key.GetName().c_str() << " : " << onlineAttribute.Value.ToString() <<  std::endl;

								if (strcmp(onlineAttribute.Key.GetName().c_str(), "Certified") == 0) {
									if (exportSetting == 1)
										productCert = certDB->GetStatName(std::stoi(onlineAttribute.Value.c_str())).GetName();
									else
										productCert = onlineAttribute.Value.ToString();
								}
								else if (strcmp(onlineAttribute.Key.GetName().c_str(), "Painted") == 0) {

									SDK::UProductPaint_TA* paint = paintDB->GetPaint(std::stoi(onlineAttribute.Value.ToString()));
									if (exportSetting == 1)
										productPaint = paint->Label.ToString();
									else
										productPaint = onlineAttribute.Value.ToString();
								}
								/*
								else if (strcmp(onlineAttribute.Key.GetName().c_str(), "Quality") == 0) {
								if (commaCount == 0) {
								myfile << ",";
								commaCount++;
								}
								int quality = std::stoi(onlineAttribute.Value.ToString());
								if (exportSetting == 1)
								myfile << quality << ",";
								else
								myfile << quality << ",";

								commaCount++;
								}
								*/
								/*
								WriteLogFile(to_string(attributes.Data[j]->GetSortLabel().Data));
								WriteLogFile(" : ");
								WriteLogFile(to_string(attributes.Data[j]->GetOnlineProductAttributeValue().Data));
								WriteLogFile(",");
								*/
							}

						}
					}


					// append quality

					productQuality = Quality[(int)tempProduct->GetQuality().GetValue()];
					std::string itemId = productName + "," + productCert + "," + productPaint + "," + productQuality + ",";

					// If item already found, add one to total
					if (itemTotals.find(itemId) != itemTotals.end()) {
						itemTotals[itemId] = itemTotals[itemId] + 1;
					}
					else {
						itemTotals[itemId] = 1;
					}




				}
				else {
					printf("product id is null.\n");
				}

			}

			for (std::map<std::string, int>::iterator iter = itemTotals.begin(); iter != itemTotals.end(); ++iter)
			{
				std::string k = iter->first;
				myfile << k << itemTotals[k] << "\n";

			}

		}
		else {
			printf("No saveData found...\n");

		}
		myfile.close();
	}

	// Compare floats
	bool FloatCompare(float a, float b)
	{
		return fabs(a - b) < .01;
	}

	void FlashWindow(int flashCount) {
		LPCWSTR WindowName = L"LaunchUnrealUWindowsClient";
		HWND hwnd = FindWindowW(WindowName, NULL);
		FLASHWINFO fi;
		fi.cbSize = sizeof(FLASHWINFO);
		fi.hwnd = hwnd;
		fi.dwFlags = FLASHW_ALL;
		fi.uCount = 10;
		fi.dwTimeout = 0;
		FlashWindowEx(&fi);
	}

	//Only Works locally :(
	void BroadcastMessage(SDK::AGameEvent_Soccar_TA* game, std::string s) {
		if (game->GoMessage != nullptr) {
			SDK::FString temp = game->GoMessage->LocalizedMessage;
			game->GoMessage->LocalizedMessage = to_fstring(s);
			game->BroadcastGoMessage();
			game->GoMessage->LocalizedMessage = temp;

		}
	}

	std::string SendPostRequest(std::string serverIP, std::string hostName, std::string path, std::string params) {
		using namespace asio;
		error_code ec;

		// what we need
		io_service svc;
		ip::tcp::socket sock(svc);
		ip::address addr = ip::address::from_string(serverIP);
		ip::tcp::endpoint endpoint(addr, 80);
		sock.connect(endpoint);

		std::string request("POST " + path + " HTTP/1.0\r\nHost: " + hostName + 
							"\r\nAccept: */*\r\nConnection: close\r\nContent-Type: application/x-www-form-urlencoded\r\nContent-Length: " + 
							std::to_string(params.length()) + "\r\n\r\n" + params);

		//std::cout << "request: " << std::endl << request << std::endl;

		sock.send(buffer(request));

		// read response
		std::string response;

		do {
			char buf[1024];
			size_t bytes_transferred = sock.receive(buffer(buf), {}, ec);
			if (!ec) response.append(buf, buf + bytes_transferred);
		} while (!ec);

		return response;
	}

	std::string SendGetRequest(std::string serverIP, std::string hostName, std::string path, std::string params) {
		using namespace asio;
		error_code ec;

		// what we need
		io_service svc;
		ip::tcp::socket sock(svc);
		ip::address addr = ip::address::from_string(serverIP);
		ip::tcp::endpoint endpoint(addr, 80);
		sock.connect(endpoint);

		std::string request("GET " + path + params + " HTTP/1.0\r\nHost: " + hostName + "\r\nAccept: */*\r\nConnection: close\r\n\r\n");

		sock.send(buffer(request));

		// read response
		std::string response;


		do {
			char buf[1024];
			size_t bytes_transferred = sock.receive(buffer(buf), {}, ec);
			if (!ec) response.append(buf, buf + bytes_transferred);
		} while (!ec);

		return response;
	}

	std::string RemoveSpaces(std::string input)
	{
		input.erase(std::remove_if(input.begin(), input.end(), isspace), input.end());
		return input;
	}

	long long GetSteamID() {
		SDK::UOnlineSubsystemSteamworks* steam = reinterpret_cast<SDK::UOnlineSubsystemSteamworks*>(Utils::GetInstanceOf(SDK::UOnlineSubsystemSteamworks::StaticClass()));
		if (steam)
			return steam->LoggedInPlayerId.SteamID;
		return 0;
	}

	std::string GetHardwareID() {
		//return "lul testing tim";

		std::wstring key = L"SOFTWARE\\Microsoft\\Cryptography";
		std::wstring name = L"MachineGuid";

		HKEY hKey;

		if (RegOpenKeyEx(HKEY_LOCAL_MACHINE, key.c_str(), 0, KEY_READ | KEY_WOW64_64KEY, &hKey) != ERROR_SUCCESS) {
			//std::cout << "Could not read registry key" << std::endl;
			return "0";
		}

		DWORD type;
		DWORD cbData;

		if (RegQueryValueEx(hKey, name.c_str(), NULL, &type, NULL, &cbData) != ERROR_SUCCESS) {
			//std::cout << "Could not read registry value 1" << std::endl;
			return "0";
		}

		if (type != REG_SZ)	{
			//std::cout << "Incorrect registry value type" << std::endl;
			return "0";
		}

		std::wstring value(cbData / sizeof(wchar_t), L'\0');
		if (RegQueryValueEx(hKey, name.c_str(), NULL, NULL, reinterpret_cast<LPBYTE>(&value[0]), &cbData) != ERROR_SUCCESS)	{
			//std::cout << "Could not read registry value 2" << std::endl;
			return "0";
		}

		//std::wcout << "HARDWAERE ID: " << value << std::endl;
		RegCloseKey(hKey);

		using convert_type = std::codecvt_utf8<wchar_t>;
		std::wstring_convert<convert_type, wchar_t> converter;
		std::string converted_str = converter.to_bytes(value);

		return converted_str.substr(0, 36);
	}

	char* stristr(const char* str1, const char* str2)
	{
		const char* p1 = str1;
		const char* p2 = str2;
		const char* r = *p2 == 0 ? str1 : 0;
		while (*p1 != 0 && *p2 != 0)
		{
			if (tolower((unsigned char)*p1) == tolower((unsigned char)*p2))
			{
				if (r == 0) 
					r = p1;
				p2++;
			} else {
				p2 = str2;
				if (r != 0)
					p1 = r + 1;
				if (tolower((unsigned char)*p1) == tolower((unsigned char)*p2)) {
					r = p1;
					p2++; 
				} else 
					r = 0;
			}
			p1++;
		}
		return *p2 == 0 ? (char*)r : 0;
	}

};

