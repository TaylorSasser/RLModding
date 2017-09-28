#include "PacketBuffer.h"
#include <iomanip>

PacketBuffer::PacketBuffer() {}
PacketBuffer::PacketBuffer(const PacketBuffer& other) : m_Buffer(other.m_Buffer), m_ReadOffset(other.m_ReadOffset) {}
PacketBuffer::PacketBuffer(PacketBuffer&& other) : m_Buffer(std::move(other.m_Buffer)), m_ReadOffset(std::move(other.m_ReadOffset)) {}

PacketBuffer::PacketBuffer(const std::string& str) : m_Buffer(str.begin(), str.end()) {}

PacketBuffer::PacketBuffer(const PacketBuffer& other, std::size_t offset) {
	m_Buffer.reserve(other.GetSize() - offset);
	std::copy(other.m_Buffer.begin() + offset, other.m_Buffer.end(), std::back_inserter(m_Buffer));
}

PacketBuffer& PacketBuffer::operator=(const PacketBuffer& other) {
	m_Buffer = other.m_Buffer;
	m_ReadOffset = other.m_ReadOffset;
	return *this;
}

PacketBuffer& PacketBuffer::operator=(PacketBuffer&& other) {
	m_Buffer = std::move(other.m_Buffer);
	m_ReadOffset = std::move(other.m_ReadOffset);
	return *this;
}

void PacketBuffer::SetReadOffset(std::size_t pos) {
	assert(pos <= GetSize());
	m_ReadOffset = pos;
}

std::string PacketBuffer::ToString() const {
	return std::string(m_Buffer.begin(), m_Buffer.end());
}

std::size_t PacketBuffer::GetSize() const { return m_Buffer.size(); }
bool PacketBuffer::IsEmpty() const { return m_Buffer.empty(); }

std::size_t PacketBuffer::GetRemaining() const {
	return m_Buffer.size() - m_ReadOffset;
}

PacketBuffer::iterator PacketBuffer::begin() {
	return m_Buffer.begin();
}
PacketBuffer::iterator PacketBuffer::end() {
	return m_Buffer.end();
}
PacketBuffer::const_iterator PacketBuffer::begin() const {
	return m_Buffer.begin();
}
PacketBuffer::const_iterator PacketBuffer::end() const {
	return m_Buffer.end();
}

std::ostream& operator<<(std::ostream& os, const PacketBuffer& buffer) {
	for (unsigned char u : buffer)
		os << std::hex << std::setfill('0') << std::setw(2) << (int)u << " ";
	os << std::dec;
	return os;
}
