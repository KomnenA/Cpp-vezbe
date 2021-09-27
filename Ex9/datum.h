#ifndef _datum_h_
#define _datum_h_

#include <iostream>

using namespace std;

class Datum{
    
    int d, m, g;
    
public:
    
    static bool moze(int d, int m, int g) {
        if (d > 0 && d <= 31 && m > 0 && m <= 12 && g > 0)
            return true;
        else
            return false;
    }
    
    Datum(int dd = 1, int mm = 7, int gg = 2011) {
        if (moze(dd, mm, gg)) {
            d = dd;
            m = mm;
            g = gg;
        }
        else
            exit(1);
    }
    
    int dohvD() const {
        return d;
    }
    
    int dohvM() const {
        return m;
    }
    
    int dohvG() const {
        return g;
    }
    
    int uporedi(const Datum& dat) const {
        if (g != dat.g)
            return g-dat.g;
        if (m != dat.m)
            return m-dat.m;
        return d-dat.d;
    }
    
    bool citaj() {
        int d, m, g;
        cout << "Unesite datum: " << endl;
        cin >> d >> m >> g;
        if (moze(d, m, g)) {
            *this = Datum(d, m, g);
            return true;
        }
        else
            return false;
    }
    
    void pisi() const {
        cout << "Datum: " << d << "." << m << "." << g << "." << endl;
    }
};

#endif
