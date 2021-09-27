#ifndef Jelo_hpp
#define Jelo_hpp

#include "Lista.hpp"
#include "Sastojak.hpp"

class GSastojak{
    
public:
    
    GSastojak(){
        cout << "Greska: Sastojak nije adekvatan!";
    }
    
};

class Jelo{
    
    string ime;
    Lista<Sastojak*> sastojci;
    void brisi();
    
public:
    
    Jelo(string i){
        ime = i;
    }
    
    virtual double cenaJela() const;
    
    virtual void postaviProcenat(int proc) = 0;
    
    virtual void postaviVreme(int h) = 0;
    
    virtual char dohvOznaku() const = 0;
    
    virtual bool adekvatan(Sastojak* s) const = 0;
    
    void dodajSastojak(Sastojak* s, int kol) {
        if (adekvatan(s))
            sastojci.dodaj(s, kol);
        else
            throw GSastojak();
    }
    
    friend ostream& operator<<(ostream& it, const Jelo& j);
    
    virtual ~Jelo(){
        brisi();
    }
    
};

#endif /* Jelo_hpp */
