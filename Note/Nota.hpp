#ifndef Nota_hpp
#define Nota_hpp

#include "Znak.hpp"

class Nota:public Znak{
    
public:
    
    enum Visina{DO, RE, MI, FA, SOL, LA, SI};
    
private:
    
    int o;
    Visina v;
    
public:
    
    Nota(int okt, Visina vis, Razlomak tr):Znak(tr) {
        o = okt;
        v = vis;
    }
    
    Nota& operator<<=(int br) {
        o -= br;
        return (*this);
    }
    Nota& operator>>=(int br) {
        o += br;
        return (*this);
    }
    
    string opis() const override{
        const string s[] = {"DO", "RE", "MI", "FA", "SOL", "LA", "SI"};
        return s[v];
    }
};

class Pauza:public Znak{
    
public:
    
    Pauza(Razlomak tr):Znak(tr) {}
    
    string opis() const override{
        return "_";
    }
    
};

#endif /* Nota_hpp */
