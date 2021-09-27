#ifndef Razlomak_hpp
#define Razlomak_hpp

#include <iostream>

using namespace std;

class Razlomak{
    
    int i,b;
    
public:
    
    Razlomak(int br, int im = 1) {
        i = im;
        b = br;
    }
    
    friend Razlomak operator+(const Razlomak& r1, const Razlomak& r2) {
        int brojilac = r1.b*r2.i + r2.b*r1.i;
        int imenilac = r1.i*r2.i;
        return Razlomak(brojilac, imenilac);
    }
    
    friend bool operator>(const Razlomak& r1, const Razlomak& r2) {
        return (r1.b*r2.i > r2.b*r1.i);
    }
    
    friend ostream& operator<<(ostream& it, const Razlomak& r) {
        return it << r.b << "/" << r.i;
    }
};

#endif /* Razlomak_hpp */
