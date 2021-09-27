#include <iostream>
#include "imenik.hpp"

using namespace std;

int main() {
    
    Imenik im;
    
    im.dodaj(Osoba("Sara", JMBG("17932172")));
    im.dodaj(Osoba("Kristina", JMBG("2083981")));
    im.dodaj(Osoba("Aco", JMBG("0832913")));
    im.dodaj(Osoba("Suza", JMBG("19938281")));
                                
    im.pisi();
}
