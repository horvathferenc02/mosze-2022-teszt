// MOSZE teszt project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hi�nyzik a _ karakter a konstans nev�b�l.
    int* b = new int[N_ELEMENTS];
    // A sor v�g�n nincs lez�r�sa a coutnak, csak karaktert �rhatunk aposztrofok k�z�, itt a helyes az id�z�jel haszn�lata.
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // A for ciklus f�lk�sz, nincs megadva a l�ptetet�s nagys�ga, �s hogy h�nyszor fusson le a ciklus.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // Mivel az els� i �rt�k a 0, 0-99-ig dupl�zza a ciklus a sz�mokat.
        b[i] = (i + 1) * 2;
    }
    // Nincs megadva h�nyszor fusson le a for ciklus.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // A v�ltoz� �rt�ke nem ker�l ki�r�sra, nincs lez�rva a cout.
        std::cout << "Ertek:" << b[i] << std::endl;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    // A v�ltoz� csak deklar�lva lett, defini�lva nem, a program nem fut le.
    int atlag = 0;
    // Vessz� van a pontosvessz� hely�n.
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        // Nincs pontosvessz�  a sor v�g�n.
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
