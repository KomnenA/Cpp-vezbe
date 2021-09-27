#ifndef _pozicija_h_
#define _pozicija_h_

class Pozicija {
    
    int vrsta, kolona;
    
public:
    
    Pozicija(int v, int k) {
        vrsta = v;
        kolona = k;
    }
    
    int dohvV() const {
        return vrsta;
    }
    
    int dohvK() const {
        return kolona;
    }
    
    friend int operator-(Pozicija poz1, Pozicija poz2);
};

#endif
