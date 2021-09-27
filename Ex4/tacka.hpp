#ifndef _tacka_h_
#define _tacka_h_

#include <iostream>

using namespace std;

class Tacka{
    double x, y;
    
public:
    Tacka(){
        cin >> x >> y;
    }
    void pisi() const {
        cout << "Koordinata x: " << x << ", koordinata y: " << y << "." << endl;
    }
    void citaj(int a, int b) {
        x = a;
        y = b;
    }
    
    double rastojanje(Tacka t2);
};

#endif
