#ifndef _izvodjac_h_
#define _izvodjac_h_

#include <iostream>
#include <cstring>

using namespace std;

enum Zanr {POP, REP, ROK};

class Izvodjac {
    
    string naziv;
    Zanr zanr;
    static string str_zanr[];
    
public:
    
    Izvodjac(string naz, Zanr z): naziv(naz), zanr(z) {
        
    }
    
    Zanr dohvZanr() const {
        return zanr;
    }
    
    void ispisi() const;
};

#endif
