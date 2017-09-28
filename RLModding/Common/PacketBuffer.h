#pragma once

#include <vector>
#include <algorithm>
#include <cstring>
#include <cassert>

class PacketBuffer {
private:
	typedef std::vector<uint8_t> Data;
	Data m_Buffer;
	std::size_t m_ReadOffset = 0;
public:
	typedef Data::iterator iterator;
	typedef Data::const_iterator const_iterator;
	typedef Data::reference reference;
	typedef Data::const_reference const_reference;

	PacketBuffer();
	PacketBuffer(const PacketBuffer& other);
	PacketBuffer(const PacketBuffer& other,size_t offset);
	PacketBuffer(PacketBuffer&& other);
	PacketBuffer(const std::string& string);

	PacketBuffer& operator=(const PacketBuffer& other);
	PacketBuffer& operator=(PacketBuffer&& other);

	template <typename T>
	void Append(T data) {
		std::size_t size = sizeof(data);
		std::size_t end_pos = m_Buffer.size();
		m_Buffer.resize(m_Buffer.size() + size);
		memcpy(&m_Buffer[end_pos], &data, size);
	}

	template <typename T>
	PacketBuffer& operator<<(T data) {
		std::reverse((u8*)&data, (u8*)&data + sizeof(T));
		Append(data);
		return *this;
	}
	PacketBuffer& operator<<(std::string data) {
		m_Buffer.insert(m_Buffer.end(), data.begin(), data.end());
		return *this;
	}

	PacketBuffer& operator<<(PacketBuffer& data) {
		m_Buffer.insert(m_Buffer.end(), data.begin(), data.end());
		return *this;
	}

	PacketBuffer& operator<<(const PacketBuffer& data) {
		m_Buffer.insert(m_Buffer.end(), data.begin(), data.end());
		return *this;
	}

	template <typename T>
	PacketBuffer& operator>>(T& data) {
		assert(m_ReadOffset + sizeof(T) <= GetSize());
		data = *(T *)&m_Buffer[m_ReadOffset];
		std::reverse((u8*)&data, (u8*)&data + sizeof(T));
		m_ReadOffset += sizeof(T);
		return *this;
	}
	PacketBuffer& operator>>(PacketBuffer& data) {
		data.Resize(GetSize() - m_ReadOffset);
		std::copy(m_Buffer.begin() + m_ReadOffset, m_Buffer.end(), data.begin());
		m_ReadOffset = m_Buffer.size();
		return *this;
	}

	PacketBuffer& operator>>(std::string& data) {
		data.resize(GetSize() - m_ReadOffset);
		std::copy(m_Buffer.begin() + m_ReadOffset, m_Buffer.end(), data.begin());
		m_ReadOffset = m_Buffer.size();
		return *this;
	}

	void ReadSome(char* buffer, std::size_t amount) {
		assert(m_ReadOffset + amount <= GetSize());
		std::copy_n(m_Buffer.begin() + m_ReadOffset, amount, buffer);
		m_ReadOffset += amount;
	}

	void ReadSome(uint8_t* buffer, std::size_t amount) {
		assert(m_ReadOffset + amount <= GetSize());
		std::copy_n(m_Buffer.begin() + m_ReadOffset, amount, buffer);
		m_ReadOffset += amount;
	}

	void ReadSome(PacketBuffer& buffer, std::size_t amount) {
		assert(m_ReadOffset + amount <= GetSize());
		buffer.Resize(amount);
		std::copy_n(m_Buffer.begin() + m_ReadOffset, amount, buffer.begin());
		m_ReadOffset += amount;
	}

	void ReadSome(std::string& buffer, std::size_t amount) {
		assert(m_ReadOffset + amount <= GetSize());
		buffer.resize(amount);
		std::copy_n(m_Buffer.begin() + m_ReadOffset, amount, buffer.begin());
		m_ReadOffset += amount;
	}

	void Resize(std::size_t size) {
		m_Buffer.resize(size);
	}

	void Reserve(std::size_t amount) {
		m_Buffer.reserve(amount);
	}

	void erase(iterator it) {
		m_Buffer.erase(it);
	}

	void Clear() {
		m_Buffer.clear();
		m_ReadOffset = 0;
	}

	bool IsFinished() const {
		return m_ReadOffset >= m_Buffer.size();
	}

	std::size_t GetReadOffset() const { return m_ReadOffset; }
	void SetReadOffset(std::size_t pos);

	std::string ToString() const;
	std::size_t GetSize() const;
	bool IsEmpty() const;
	std::size_t GetRemaining() const;

	iterator begin();
	iterator end();
	const_iterator begin() const;
	const_iterator end() const;

	reference operator[](Data::size_type i) { return m_Buffer[i]; }
	const_reference operator[](Data::size_type i) const { return m_Buffer[i]; }
};

std::ostream& operator<<(std::ostream& os, const PacketBuffer& buffer);