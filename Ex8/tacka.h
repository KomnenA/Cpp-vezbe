#ifndef _tacka_h_
#define _tacka_h_

#include <iostream>
#include <cmath>

using namespace std;

class Tacka{
    
    double m;
    int x, y, z;
    
public:
    
    Tacka(double mm = 1, int xx = 0, int yy = 0, int zz = 0) {
        m = mm;
        x = xx;
        y = yy;
        z = zz;
    }
    
    double rastojanje(const Tacka& t2) const {
        double r = sqrt(pow(x-t2.x,2)+pow(y-t2.y,2)+pow(z-t2.z,2));
        return r;
    }
    
    void ispisi() const {
        cout << "Koordinata x: " << x << ", koordinata y: " << y << ", koordinata z: " << z << endl;
    }
};

#endif
