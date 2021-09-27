#ifndef Sastojak_hpp
#define Sastojak_hpp

#include <iostream>

using namespace std;

class Sastojak{
    
    string ime;
    double cena;
    
public:
    
    enum Vrsta{SLAN, SLAD, NEUT};
    
    Sastojak(string i, double c){
        ime = i;
        cena = c;
    }
    
    virtual Vrsta dohvVrstu() const = 0;
    
    double izracunajCenu(int kol) {
        return kol*cena/1000;
    }
    
    friend ostream& operator<<(ostream& it, const Sastojak& s) {
        return it << s.ime << "-" << s.cena << "/kg";
    }
    
    virtual ~Sastojak(){
        
    }
};

class Slan:public Sastojak{
    
public:
    
    Slan(string i, double c):Sastojak(i,c) {}
    
    Vrsta dohvVrstu() const override{
        return SLAN;
    }
};

class Sladak:public Sastojak{
    
public:
    
    Sladak(string i, double c):Sastojak(i,c) {}
    
    Vrsta dohvVrstu() const override{
        return SLAD;
    }
};

class Neutralan:public Sastojak{
    
public:
    
    Neutralan(string i, double c):Sastojak(i,c) {}
    
    Vrsta dohvVrstu() const override{
        return NEUT;
    }
};

#endif /* Sastojak_hpp */
