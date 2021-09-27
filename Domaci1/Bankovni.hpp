#ifndef Bankovni_hpp
#define Bankovni_hpp

#include "Osoba.hpp"

class Bankovni{
    
    Osoba* vlasnik;
    int brRacuna;
    double iznos;
    
public:
    
    Bankovni(Osoba* o, int broj):vlasnik(o), brRacuna(broj) {
        iznos = 0;
    }
    
    Bankovni(const Bankovni&) = delete;
    Bankovni& operator=(const Bankovni&) = delete;
    
    Osoba* dohvVlasnika() const {
        return vlasnik;
    }
    int dohvBrojRacuna() const {
        return brRacuna;
    }
    double dohvIznos() const {
        return iznos;
    }
    
    Bankovni& operator+=(double vrednost);
    
    void prenesiIznos(double i, Bankovni& racun);
    
    virtual string dohvOznakuValute() const = 0;
    
    friend ostream& operator<<(ostream& it, const Bankovni& r);
};

#endif /* Bankovni_hpp */
