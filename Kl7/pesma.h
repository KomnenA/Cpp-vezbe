#ifndef _pesma_h_
#define _pesma_h_

#include "izvodjac.h"

#include <cstring>
#include <iostream>

using namespace std;

class Pesma {
    
    string naziv;
    int min, sek;
    
    int kap;
    Izvodjac** izv;
    int br=0;
    
public:
    
    Pesma(int m, int s, string naz, int k): min(m), sek(s), naziv(naz) {
        izv = new Izvodjac*[kap = k];
    }
    
    Pesma (const Pesma& p) = delete;
    
    int dohvMin() const {
        return min;
    }
    
    int dohvSek() const {
        return sek;
    }
    
    friend bool duze(const Pesma& p1, const Pesma& p2) {
        if (p1.min > p2.min || ((p1.min == p2.min && p1.sek > p2.sek)))
            return true;
        else
            return false;
    }
    
    void dodaj(Izvodjac *i) {
        if (br < kap)
            izv[br++] = i;
    }
    
    void ispisi() const;
    
    ~Pesma() {
        delete [] izv;
    }
};

#endif
