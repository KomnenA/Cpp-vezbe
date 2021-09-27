#ifndef Osoba_hpp
#define Osoba_hpp

#include "Datum.hpp"

class Osoba{
    
    string ime;
    string matBroj;
    Datum datum;
    
public:
    
    Osoba(string i, string br, Datum d):ime(i), matBroj(br), datum(d) {}
    
    Osoba(const Osoba&) = delete;
    Osoba& operator=(const Osoba&) = delete;
    
    string dohvIme() const {
        return ime;
    }
    string dohvMatBr() const {
        return matBroj;
    }
    Datum dohvDatum() const {
        return datum;
    }
    
    friend ostream& operator<<(ostream& it, const Osoba& o);
};

#endif /* Osoba_hpp */
