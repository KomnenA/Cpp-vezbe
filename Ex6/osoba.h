#ifndef _osoba_h_
#define _osoba_h_
#include "jmbg.h"
#include <cstring>
#include <iostream>

using namespace std;

class Osoba {
    
    string ime;
    JMBG jmbg;
    
public:
    
    Osoba(string i, JMBG j) : jmbg(j), ime(i) {
    }
    
    string dohvIme() const {
        return ime;
    }
    
    JMBG dohvJmbg() const {
        return jmbg;
    }
    
    void pisi() const {
        cout << ime << "(";
        jmbg.pisi();
        cout << ")" << endl;
    }
};

#endif
