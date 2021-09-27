#ifndef Namirnica_hpp
#define Namirnica_hpp

#include "NutritivnaVrednost.hpp"

class Namirnica{
    
    string naziv;
    NutritivnaVrednost nVrednost;
    bool posna;
    
public:
    
    Namirnica(string n, NutritivnaVrednost nV, bool p):naziv(n), nVrednost(nV), posna(p) {}
    
    string dohvNaziv() const {
        return naziv;
    }
    NutritivnaVrednost dohvNVrednost() const {
        return nVrednost;
    }
    bool dohvInfoPosna() const {
        return posna;
    }
    
    friend bool operator==(const Namirnica& n1, const Namirnica& n2);
    
    friend ostream& operator<<(ostream& it, const Namirnica& n);
};

#endif /* Namirnica_hpp */
