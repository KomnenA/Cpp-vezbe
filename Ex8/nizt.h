#ifndef _nizt_h_
#define _nizt_h_
#include "tacka.h"

#include <iostream>

using namespace std;

class Nizt{
    
    Tacka* niz;
    int kap, duz;
    
public:
    
    Nizt(int k = 5) {
        niz = new Tacka[kap = k];
        duz = 0;
    }
    
    Nizt(const Nizt& n) {
        niz = new Tacka[kap = n.kap];
        duz = n.duz;
        for (int i = 0; i < duz; i++) {
            niz[i] = n.niz[i];
        }
    }
    
    Nizt(Nizt&& n) {
        kap = n.kap;
        duz = n.duz;
        niz = n.niz;
        n.niz = nullptr;
    }
    
    Nizt& dodaj(const Tacka& t) {
        if (duz == kap) {
            Tacka* pom = new Tacka[kap+=5];
            for (int i = 0; i < duz; i++) {
                pom[i] = niz[i];
            }
            delete [] niz;
            niz = pom;
        }
        niz[duz++] = t;
        return *this;
    }
    
    Tacka maxr(const Tacka& t) const {
        int ind = 0;
        double tr = t.rastojanje(niz[0]);
        for (int i = 1; i<duz; i++) {
            if (t.rastojanje(niz[i]) > tr) {
                tr = t.rastojanje(niz[i]);
                ind = i;
            }
        }
        return niz[ind];
    }
    
    void ispisi() const {
        for (int i = 0; i<duz; i++) {
            niz[i].ispisi();
        }
    }
    
    int velicina() const {
        return duz;
    }
    
    ~Nizt() {
        delete [] niz;
    }
};

#endif
