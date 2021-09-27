#ifndef Kompozicija_hpp
#define Kompozicija_hpp

#include "Takt.hpp"

class GNijeZavrsen{
    
public:
    
    GNijeZavrsen() {
        cout << "Greska: Takt nije zavrsen!";
    }
};

class GNepotpun{
    
public:
    
    GNepotpun() {
        cout << "Greska: Nepotpun takt!";
    }
};

class GDuzina{
    
public:
    
    GDuzina() {
        cout << "Greska: Nejednaka duzina taktova!";
    }
    
};

class Kompozicija{
    
    Sekvenca<Takt*> s;
    bool prvi;
    bool moze;
    Razlomak tr;
    
public:
    
    Kompozicija():tr(Razlomak(0)) {
        prvi = true;
        moze = true;
    }
    
    Kompozicija(const Kompozicija&) = delete;
    Kompozicija& operator=(const Kompozicija&) = delete;
    
    Kompozicija& dodaj(Takt& t) {
        if (t.daLiJeZavrsen() == false)
            throw GZavrsen();
        if (prvi) {
            prvi = false;
            tr = t.dohvMaksTrajanje();
        }
        else {
            if (tr > t.dohvMaksTrajanje() || t.dohvMaksTrajanje() > tr)
                throw GDuzina();
            if (t.daLiJeNepotpun()) {
                if (!moze)
                    throw GNepotpun();
            }
            else
                moze = false;
        }
        s.dodaj(&t);
        return *this;
    }
    
    friend ostream& operator<<(ostream& it, const Kompozicija& k) {
        for (int i = 0; i<k.s.dohvDuzinu(); i++) {
            it << *k.s[i] << endl;
        }
        return it;
    }
};

#endif /* Kompozicija_hpp */
