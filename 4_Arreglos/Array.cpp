#include "Array.h"
#include <iomanip>

uint32 Array::operator[](size_t index)
{
    return Get(index);
}

uint32 Array::Get(size_t index)
{
    if (index < bruhSize)
    {
        return arrayz[index];
    }
    else
    {
        return 0;
    }
}

void Array::Set(size_t index, const char* bytes)
{
    uint32 res;
    std::memcpy(&res, bytes, 4);
    Set(index, res);
}

void Array::Set(size_t index, uint32 newValue)
{
    if (index < bruhSize)
    {
        arrayz[index] = newValue;
    }
}

size_t Array::SizeGet()
{
    return bruhSize;
}

void Array::Clear()
{
    memset(arrayz, 0, bruhSize * sizeof(uint32));
}
