#ifndef Znak_hpp
#define Znak_hpp

#include "Razlomak.hpp"

class Znak{
    
    Razlomak trajanje;
    
public:
    
    explicit Znak(Razlomak t):trajanje(t) {}
    
    Razlomak dohvTrajanje() const {
        return trajanje;
    }
    
    friend Razlomak operator+(const Znak& z1, const Znak& z2) {
        return z1.trajanje + z2.trajanje;
    }
    
    operator Razlomak() const {
        return trajanje;
    }
    
    virtual string opis()const = 0;
    
    friend ostream& operator<<(ostream& it, const Znak& z) {
        it << z.opis() << "(" << z.trajanje << ")";
        return it;
    }
    
    virtual ~Znak() {
        
    }
};

#endif /* Znak_hpp */
