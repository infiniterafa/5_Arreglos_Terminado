#pragma once
#include <cstdint>
#include <string.h>

typedef unsigned __int32 uint32;

class Array
{
private:
	size_t bruhSize;

public:
	uint32* arrayz;
	Array(size_t newsize)
	{
		bruhSize = newsize;
		arrayz = new uint32(bruhSize);
	}

	~Array()
	{
		if (arrayz != nullptr)
		{
			delete[] arrayz;
			bruhSize = 0;
		}
	}

	uint32 operator[](size_t index);
	uint32 Get(size_t index);
	void Set(size_t index, const char* bytes);
	void Set(size_t index, uint32 newValue);
	size_t SizeGet();
	void Clear();
};