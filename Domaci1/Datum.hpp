#ifndef Datum_hpp
#define Datum_hpp

#include <iostream>

using namespace std;

class Datum{
    
    int d, m, g;
    
public:
    
    Datum(int dd=1, int mm=1, int gg=2021){
        d = dd;
        m = mm;
        g = gg;
    }
    
    friend bool operator==(const Datum& d1, const Datum& d2);
    
    friend ostream& operator<<(ostream& it, const Datum& d);
};

#endif /* Datum_hpp */
