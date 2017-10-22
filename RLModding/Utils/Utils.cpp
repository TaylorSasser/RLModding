#include "Utils.h"
#include "Pattern/PatternFinder.h"
#include "../RL/SDK.hpp"
#include <fstream>
#include <map>
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
};