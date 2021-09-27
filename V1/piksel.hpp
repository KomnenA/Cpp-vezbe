#ifndef _piksel_h_
#define _piksel_h_

#include <iostream>

using namespace std;

class Piksel {
    
    int crvena, zelena, plava;
    
public:
    
    Piksel(int c=0, int z=0, int p=0) {
        if (c <= 255 && z <= 255 && p <= 255) {
           crvena = c;
           zelena = z;
           plava = p;
        }
    }
    
    int dohvC() const {
        return crvena;
    }
    
    int dohvZ() const {
        return zelena;
    }
    
    int dohvP() const {
        return plava;
    }
    
    friend Piksel operator+(Piksel p1, Piksel p2);
    
    friend bool operator==(Piksel p1, Piksel p2);
    
    friend ostream& operator<<(ostream& it, Piksel p);
};

#endif
