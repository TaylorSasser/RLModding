#pragma once
#include <string>
#include <iosfwd>
#include <vector>

namespace Network {

class IPAddress {
private:
	uint32_t m_Address;
	bool m_Valid;
public:
	IPAddress() noexcept;
	IPAddress(const std::string& str);
	IPAddress(const std::wstring& str);
	IPAddress(uint8_t octet1,uint8_t octet2,uint8_t octet3,uint8_t octet4) noexcept;

	uint8_t GetOctet(uint8_t num) const;

	void SetOctet(uint8_t num,uint8_t value);

	bool IsValid() const noexcept { return m_Valid; }

	std::string ToString() const;

	static IPAddress LocalAddress();
	bool operator==(const IPAddress& right);
	bool operator!=(const IPAddress& right);
	bool operator==(bool b);
};

typedef std::vector<IPAddress> IPAddresses;
std::ostream& operator<<(std::ostream& os, const IPAddress& addr);
std::wostream& operator<<(std::wostream& os, const IPAddress& addr);

}