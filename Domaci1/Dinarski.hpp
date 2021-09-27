#ifndef Dinarski_hpp
#define Dinarski_hpp

#include "Bankovni.hpp"

class Dinarski:public Bankovni{
    
public:
    
    Dinarski(Osoba* o, int broj):Bankovni(o, broj) {}
    
    string dohvOznakuValute() const {
        return "RSD";
    }
};

#endif /* Dinarski_hpp */
