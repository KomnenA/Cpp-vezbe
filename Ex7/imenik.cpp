#include "imenik.hpp"
#include <iostream>

using namespace std;

Imenik& Imenik::dodaj(const Osoba& oso) {
    Elem *tek = prvi, *pret = nullptr;
    
    if (prvi == nullptr) {
        prvi = new Elem(oso, tek);
    }
    else {
    
    while (tek && veci(oso.dohvJmbg(), tek->oso.dohvJmbg())) {
        pret = tek;
        tek = tek->sled;
    }
    
    if (tek == prvi) {
        Elem *novi = new Elem(oso, tek);
        novi -> sled = prvi;
        prvi = novi;
    }
    else {
        pret = pret->sled = new Elem(oso, tek);
    }
}
        
    return *this;
}

void Imenik::pisi() const {
    for (Elem *tek = prvi; tek; tek = tek-> sled) {
        tek->oso.ispisi();
    }
}

Imenik::~Imenik() {
    while (prvi) {
        Elem* stari = prvi;
        prvi = prvi->sled;
        delete(stari);
    }
}
