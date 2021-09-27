#include "plejlista.h"

#include <iostream>

using namespace std;

Plejlista::Plejlista(const Plejlista& p) {
    min = p.min;
    sek = p.sek;
    Elem *tek = p.prvi;
    Elem *novi = nullptr, *posl = nullptr;
    while (tek) {
        novi = new Elem(tek->pes, prvi);
        if (!prvi)
            prvi = novi;
        else
            posl -> sled = novi;
        posl = novi;
        tek = tek->sled;
    }
}

Plejlista::Plejlista(Plejlista&& p) {
    min = p.min;
    sek = p.sek;
    prvi = p.prvi;
    p.prvi = nullptr;
}

Plejlista::~Plejlista() {
    Elem *tek = prvi, *stari;
    while (tek) {
        stari = tek;
        tek = tek->sled;
        delete(stari);
    }
}

void Plejlista::dodaj(Pesma *p) {
    prvi = new Elem(p, prvi);
    min = min + p->dohvMin() + (sek + p->dohvSek()) / 60;
    sek = (sek + p->dohvSek()) % 60;
}

void Plejlista::uredi() {
    for (Elem *t1 = prvi; t1->sled; t1 = t1->sled){
        for (Elem *t2 = t1->sled; t2; t2=t2->sled) {
            if(duze(*t1->pes, *t2->pes)) {
                Pesma *p = t1->pes;
                t1->pes = t2->pes;
                t2->pes = p;
            }
        }
    }
}

void Plejlista::pisi() const {
    cout << "Lista - trajanje: " << min << ":" << sek << endl;
    for (Elem *tek = prvi; tek; tek=tek->sled) {
        tek->pes->ispisi();
    }
}
