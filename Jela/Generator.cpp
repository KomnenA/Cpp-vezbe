#include "Generator.hpp"

void Generator::napraviMeni(int sat) {
    
    char vrsta = 'P';
    int broj = jelovnik->dohvBroj();
    int poc = 0;
    
    for (int i = 0; i<3; i++) {
        while(1) {
        int randomBroj = rand() % broj + 1;
        jelovnik->naPrvi();
        for (int j = 1; j<randomBroj; j++) {
            jelovnik->naSled();
        }
        if (jelovnik->dohvPodatak()->dohvOznaku() == vrsta) {
            meni[poc++] = jelovnik->dohvPodatak();
            if (vrsta == 'P') {
                vrsta = 'G';
                break;
            }
            else if (vrsta == 'G') {
                vrsta = 'D';
                break;
            }
            else
                break;
          }
       }
    }
}

double Generator::dohvCenu() const {
    
    double cena = 0;
    for (int i = 0; i<3; i++) {
        cena += meni[i]->cenaJela();
    }
    return cena;
}

ostream& operator<<(ostream& it, const Generator& g) {
    
    it << g.dohvCenu() << endl;
    for (int i = 0; i<3; i++) {
        it << *(g.meni[i]) << endl;
    }
    return it;
}
