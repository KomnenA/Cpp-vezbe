#ifndef _tacka_h_
#define _tacka_h_

#include <iostream>

using namespace std;

class Tacka {
    
    double x, y;
    
public:
    
    void postavi(double a, double b) {
        this -> x = a; // isto sto i x = a;
        this -> y = b; // isto sto i y = b;
    }
    
    double aps() const {
        return x; // return this -> x;
    }
    double ord() const {
        return y;
    }
    
    double rastojanje(Tacka t) const;
    
    void citaj() {
        cin >> x >> y;
    }
    
    void pisi() const {
        cout << "(" << x << "," << y << ")";
    }
};


#endif // !_tacka_h_
