#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // A kommentek az alattuk lévõ sorra értendõk!!!!.

    // Hiányzik a _ karakter a konstans nevébõl.
    int* b = new int[NELEMENTS];
    // A sor végén nincs lezárása a coutnak, csak karaktert írhatunk aposztrofok közé, itt a helyes az idézõjel használata.
    std::cout << '1-100 ertekek duplazasa'
        // A for ciklus félkész, nincs megadva a léptetetés nagysága, és hogy hányszor fusson le a ciklus.
        for (int i = 0;)
        {
            // Mivel az elsõ i érték a 0, 0-99-ig duplázza a ciklus a számokat.
            b[i] = i * 2;
        }
    // Nincs megadva hányszor fusson le a for ciklus.
    for (int i = 0; i; i++)
    {
        // A változó értéke nem kerül kiírásra, nincs lezárva a cout.
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    // A változó csak deklarálva lett, definiálva nem.
    int atlag;
    // Vesszõ van a pontosvesszõ helyén.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // Nincs pontosvesszõ  a sor végén.
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
