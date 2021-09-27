#ifndef Sastojak_hpp
#define Sastojak_hpp

#include "Namirnica.hpp"

class Sastojak{
    
    Namirnica namirnica;
    int kolicina;
    
public:
    
    Sastojak(Namirnica n, int k):namirnica(n), kolicina(k) {}
    
    Namirnica dohvNamirnicu() const {
        return namirnica;
    }
    int dohvKolicinu() const {
        return kolicina;
    }
    
    NutritivnaVrednost odrediNVrednost() const;
    
    double brojKalorija() const;
    
    friend ostream& operator<<(ostream& it, const Sastojak& s);
};

#endif /* Sastojak_hpp */
