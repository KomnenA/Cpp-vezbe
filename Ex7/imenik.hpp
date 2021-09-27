#ifndef _imenik_h_
#define _imenik_h_
#include "osoba.h"

class Imenik {
    struct Elem{
        Osoba oso;
        Elem *sled;
        Elem(const Osoba& o, Elem* sl) : oso(o), sled(sl) {
            sl = nullptr;
        }
    };
    Elem *prvi;
    
public:
    
    Imenik() {
        prvi = nullptr;
    }
    
    Imenik(const Imenik&) = delete;
    
    Imenik& dodaj(const Osoba& oso);
    
    void pisi() const;
    
    ~Imenik();
    
};

#endif
