#include <iostream>
#include "imenik.hpp"

using namespace std;

int main() {
    
    Imenik im;
    
    im.dodaj(Osoba("Sara", JMBG("173827492")));
    im.dodaj(Osoba("Kristina", JMBG("294921482")));
    im.dodaj(Osoba("Aco", JMBG("0321311")));
    im.pisi();
}
