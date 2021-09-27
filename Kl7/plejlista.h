#ifndef _plejlista_h_
#define _plejlista_h_

#include "pesma.h"

#include <iostream>

using namespace std;

class Plejlista {
    
    int min = 0, sek = 0;
    
    struct Elem {
        Pesma *pes;
        Elem *sled;
        Elem (Pesma *p, Elem *sl): pes(p), sled(sl) {
            sl = nullptr;
        }
    };
    Elem *prvi = nullptr;
    
public:
    
    void dodaj(Pesma *p);
    
    void uredi();
    
    void pisi() const;
    
    Plejlista() = default;
    
    Plejlista(const Plejlista& p);
    
    Plejlista(Plejlista&& p);
    
    ~Plejlista();
};

#endif
