// MOSZE teszt project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hiányzik a _ karakter a konstans nevébõl.
    int* b = new int[N_ELEMENTS];
    // A sor végén nincs lezárása a coutnak, csak karaktert írhatunk aposztrofok közé, itt a helyes az idézõjel használata.
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // A for ciklus félkész, nincs megadva a léptetetés nagysága, és hogy hányszor fusson le a ciklus.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // Mivel az elsõ i érték a 0, 0-99-ig duplázza a ciklus a számokat.
        b[i] = (i + 1) * 2;
    }
    // Nincs megadva hányszor fusson le a for ciklus.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // A változó értéke nem kerül kiírásra, nincs lezárva a cout.
        std::cout << "Ertek:" << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    // A változó csak deklarálva lett, definiálva nem, a program nem fut le.
    int atlag = 0;
    // Vesszõ van a pontosvesszõ helyén.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // Nincs pontosvesszõ  a sor végén.
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
