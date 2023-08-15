#include <iostream>
#include <Windows.h>
#include <iomanip>
#include "Array.h"
#include "StringArray.h"
#include "Entity.h"

typedef StringArray<std::string> stringersArray;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    std::cout << u8"El niño y el pingüino ⚱️☠️  🌈  👈🗿👈\n";
    std::cout << "Esto es un arroba \x40 \n";
    std::cout << "Esto es un kanji: \xE9\x9B\xBB \n";
    std::cout << "Esto es un emoji: \xF0\x9F\x91\x80 \n";

    std::cout << "Emojis del F09F9200 al F09F92FF\n";
    char bytes[5] = "\xF0\x9F\x92\x80";
    std::cout << bytes << "\n";


    for (int i = 0; i <= 0xF; i++)
    {
        for (int j = 0; j <= 0xF; j++)
        {
            for (int c = 0; c < 5; c++)
            {
                std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(static_cast<unsigned char>(bytes[c]));
            }
            std::cout << "\n";
            bytes[3] += 1;
            std::cout << bytes << "\n";
        }
        std::cout << "\n";
    }

    for (int i = 0; i <= 0xF; i++)
    {
        for (int j = 0; j <= 0xF; j++)
        {
            std::cout << std::hex << bytes << " ";
            bytes[3] += 1;
        }
        std::cout << "\n";
    }

    Array* lesgo = new Array(60);

    std::cout << "Arrays de enteros\n";
    StringArray<int> *enteros = new StringArray<int>(10);

    (*enteros)[0] = 12;
    (*enteros)[1] = 5;
    (*enteros)[2] = 69;
    enteros->printValues();

    std::cout << "Arrays de strings\n";
    stringersArray strings = stringersArray(20);
    strings[0] = "Ayoooo";
    strings[1] = "Brooouuus";
    strings.printValues();
    strings.resize(5);
    strings.printValues();

    StringArray<Entity> entities = StringArray<Entity>(10);

    entities.printValues();

    std::cout << "size of unit32: " << sizeof(uint32) << "\n";
    //std::cout << "size of string: " << sizeof(string) << "\n";
    puts("Arreglo de uint32");
    //puts("Arreglo de Strings");

   // std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<uint32>(static_cast<unsigned char>(*"\xF0\x9F\x90\x88")) << "\n";
    const char* gato = "\xF0\x9F\x90\x88";

    lesgo->Clear();
    lesgo->Set(5, gato);//static_cast<uint32>(*"\xF0\x9F\x90\x88"));
    lesgo->Set(6,65536);
    lesgo->Set(7, "\xF0\x9F\x90\x88");

    lesgo[0] = *"2";

    for (int i = 0; i < lesgo->SizeGet(); i++)
    {
        std::cout << lesgo->Get(i) << "\n";
    }
}