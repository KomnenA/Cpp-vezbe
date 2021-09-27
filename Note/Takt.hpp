#ifndef Takt_hpp
#define Takt_hpp

#include "Sekvenca.hpp"
#include "Nota.hpp"

class GTrajanje{
    
public:
    
    GTrajanje(){
        cout << "Greska: Premaseno je maksimalno trajanje takta!";
    }
};

class GZavrsen{
    
public:
    
    GZavrsen(){
        cout << "Greska: Takt je zavrsen!";
    }
};

class Takt{
    
    Sekvenca<Znak*> s;
    Razlomak max;
    Razlomak tr;
    bool zavrsen = false;
    
public:
    
    Takt(Razlomak mt):max(mt), tr(Razlomak(0)) {}
    
    Takt(const Takt&) = delete;
    Takt& operator=(const Takt&) = delete;
    
    Razlomak dohvMaksTrajanje() const {
        return max;
    }
    
    Takt& dodaj(Znak& z) {
        if (tr + z.dohvTrajanje() > max)
            throw GTrajanje();
        if (zavrsen == true)
            throw GZavrsen();
        s.dodaj(&z);
        tr = tr + z;
        return *this;
    }
    
    void zavrsiTakt() {
        zavrsen = true;
    }
    
    bool daLiJeZavrsen() const {
        return zavrsen;
    }
    bool daLiJeNepotpun() const {
        return max>tr;
    }
    
    friend ostream& operator<<(ostream& it, const Takt& t) {
        for (int i = 0; i<t.s.dohvDuzinu(); i++) {
            it << *t.s[i] << " ";
        }
        return it << "|";
    }
};

#endif /* Takt_hpp */
