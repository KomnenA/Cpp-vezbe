#ifndef Privilegovan_hpp
#define Privilegovan_hpp

#include "Tim.hpp"

class GIgrac {
    
public:
    
    GIgrac() {
        cout << "Greska: Vrednost igraca nije dovoljno velika!";
    }
};

class Privilegovan:public Tim{
    
    int minVrednost;
    
    void pisi(ostream& it) const override;
    
public:
    
    Privilegovan(string n, int max, int min):Tim(n, max) {
        minVrednost = min;
    }
    
    void prikljuciIgraca(Igrac* i, int poz) override;
};

#endif /* Privilegovan_hpp */
