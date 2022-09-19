#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // A kommentek az alattuk l�v� sorra �rtend�k!!!!.

    // Hi�nyzik a _ karakter a konstans nev�b�l.
    int* b = new int[NELEMENTS];
    // A sor v�g�n nincs lez�r�sa a coutnak, csak karaktert �rhatunk aposztrofok k�z�, itt a helyes az id�z�jel haszn�lata.
    std::cout << '1-100 ertekek duplazasa'
        // A for ciklus f�lk�sz, nincs megadva a l�ptetet�s nagys�ga, �s hogy h�nyszor fusson le a ciklus.
        for (int i = 0;)
        {
            // Mivel az els� i �rt�k a 0, 0-99-ig dupl�zza a ciklus a sz�mokat.
            b[i] = i * 2;
        }
    // Nincs megadva h�nyszor fusson le a for ciklus.
    for (int i = 0; i; i++)
    {
        // A v�ltoz� �rt�ke nem ker�l ki�r�sra, nincs lez�rva a cout.
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    // A v�ltoz� csak deklar�lva lett, defini�lva nem.
    int atlag;
    // Vessz� van a pontosvessz� hely�n.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // Nincs pontosvessz�  a sor v�g�n.
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
