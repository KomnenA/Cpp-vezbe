#ifndef _osoba_h_
#define _osoba_h_
#include "jmbg.h"
#include <iostream>

using namespace std;

class Osoba {
    
    string ime;
    JMBG jmbg;
    
public:
    
    Osoba(string i, JMBG j) : ime(i), jmbg(j) {
        
    }
    
    string dohvIme() const {
        return ime;
    }
    
    JMBG dohvJmbg() const {
        return jmbg;
    }
    
    void ispisi() const {
        cout << ime << "(";
        jmbg.ispisi();
        cout << ")" << endl;
    }
};

#endif
