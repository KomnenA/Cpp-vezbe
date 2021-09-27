#ifndef Igrac_hpp
#define Igrac_hpp

#include <iostream>

using namespace std;

class Igrac{
    
    string ime;
    int vrednost;
    
public:
    
    Igrac(string i, int vr=1000) {
        ime = i;
        vrednost = vr;
    }
    
    string dohvIme() const {
        return ime;
    }
    int dohvVrednost() const {
        return vrednost;
    }
    
    Igrac& povecajVrednost(int procenat);
    Igrac& smanjiVrednost(int procenat);
    
    friend bool operator==(const Igrac& i1, const Igrac& i2);
    
    friend ostream& operator<<(ostream& it, const Igrac& i);
};

#endif /* Igrac_hpp */
