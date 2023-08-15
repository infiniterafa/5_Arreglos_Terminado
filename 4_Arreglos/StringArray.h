#pragma once
#include <cstdint>
#include <string.h>
#include <iostream>
#include "Entity.h"

template <typename T>

class StringArray
{
	size_t bruhSize;
	T* arrayz;
	//std::uint32_t strings;

public:

	StringArray(size_t newsize)
	{
		bruhSize = newsize;
		arrayz = new T[bruhSize];
	}

	~StringArray()
	{
		if (arrayz != nullptr)
		{
			delete[] arrayz;
			bruhSize = 0;
		}
	}

	T& operator[](size_t index)
	{
		return arrayz[index];
	}

	void resize(size_t newSize)
	{
		T* newData = new T[newSize];
		if (newSize < bruhSize)
		{
			for (int i = 0; i < newSize; i++)
			{
				newData[i] = arrayz[i];
			}
			delete[] arrayz;
			arrayz = newData;
			bruhSize = newSize;
		}
		else
		{
			for (int i = 0; i < bruhSize; i++)
			{
				newData[i] = arrayz[i];
			}
			delete[] arrayz;
			arrayz = newData;
			bruhSize = newSize;
		}
	}

	size_t getSize() const
	{
		return bruhSize;
	}

	size_t sizebytes()
	{
		return sizeof(T);
	}

	void printValues()
	{
		for (int i = 0; i < bruhSize; i++)
		{
			std::cout << "[ " << i << " ] = " << arrayz[i] << "\n";
		}
	}

};
template<>
inline void StringArray<Entity>::printValues()
{
	for (int i = 0; i < bruhSize; i++)
	{
		std::cout << "[" << i << "] = " << arrayz[i].toString() << "\n";
	}
}

