#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <fstream>

using namespace std;

class MetodyPomocnicze{

public:
    static string wczytajLinie();
    static string konwersjaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    static string pobierzLiczbe(string tekst, int pozycjaZnaku);
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static bool czyPlikJestPusty(fstream &plikTekstowy);
    static int wczytajLiczbeCalkowita();
    static char wczytajZnak();
};

#endif // METODYPOMOCNICZE_H
