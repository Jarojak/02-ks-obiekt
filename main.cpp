#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//    ksiazkaAdresowa.rejestracjaUzytkownika();
//    ksiazkaAdresowa.logowanieUzytkownika();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.wylogowanieUzytkownika();
//    ksiazkaAdresowa.logowanieUzytkownika();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.wylogowanieUzytkownika();
//    ksiazkaAdresowa.logowanieUzytkownika();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.wylogowanieUzytkownika();
//    ksiazkaAdresowa.logowanieUzytkownika();
//    ksiazkaAdresowa.usunAdresata();
//    ksiazkaAdresowa.wylogowanieUzytkownika();
//    ksiazkaAdresowa.logowanieUzytkownika();
//    ksiazkaAdresowa.usunAdresata();
//    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.wylogowanieUzytkownika();

    while (true)
    {
        if (ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika() == 0)
        {
            ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (ksiazkaAdresowa.pobierzWybor())
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (ksiazkaAdresowa.pobierzWybor())
            {
            case '1':
                ksiazkaAdresowa.dodajAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                break;
            }
        }
    }

    return 0;
}
