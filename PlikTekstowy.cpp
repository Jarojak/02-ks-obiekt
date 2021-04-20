#include "PlikTekstowy.h"

bool PlikTekstowy::czyPlikJestPusty()
{
    bool pusty = true;
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);

    if (plikTekstowy.good() == true)
    {
        plikTekstowy.seekg(0, ios::end);
        if (plikTekstowy.tellg() != 0)
            pusty = false;
    }

    plikTekstowy.close();
    return pusty;
}

string PlikTekstowy::ostaniaLiniaWPlikuTekstowym()
{
    fstream plikTekstowy;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);
    if(plikTekstowy.good() == true) {
        plikTekstowy.seekg(-1,ios_base::end);

        bool przeszukujPlik = true;
        while(przeszukujPlik) {
            char ch;
            plikTekstowy.get(ch);

            if((int)plikTekstowy.tellg() <= 1) {
                plikTekstowy.seekg(0);
                przeszukujPlik = false;
            }
            else if(ch == '\n') {
                przeszukujPlik = false;
            }
            else {
                plikTekstowy.seekg(-2,ios_base::cur);
            }
        }

        string ostatniaLiniaWPlikuTekstowym;
        getline(plikTekstowy,ostatniaLiniaWPlikuTekstowym);
        return ostatniaLiniaWPlikuTekstowym;

        plikTekstowy.close();
    }
}
