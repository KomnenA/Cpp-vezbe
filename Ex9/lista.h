#ifndef _lista_h_
#define _lista_h_
#include "datum.h"

class Lista{
    struct Elem{
        Datum dat;
        Elem *sled;
        Elem(const Datum& d, Elem* sl) : dat(d), sled(sl) {
            sl = nullptr;
        }
    };
    Elem *prvi, *posl;
    int duz;
    
public:
    Lista() {
        prvi = posl = nullptr;
        duz = 0;
    }
    Lista(const Lista& l) {
        prvi = posl = nullptr;
        duz = 0;
        for (Elem *tek = l.prvi; tek; tek=tek->sled) {
            dodaj(tek->dat);
        }
    }
    Lista(Lista&& l) {
        duz = l.duz;
        prvi = l.prvi;
        posl = l.posl;
        l.prvi = l.posl = nullptr;
    }
    
    int duzina() const {
        return duz;
    }
    
    Lista& dodaj(const Datum& dat) {
        if (prvi == nullptr) {
            posl = prvi = new Elem(dat, nullptr);
        }
        else {
            posl = posl->sled = new Elem(dat, nullptr);
        }
        duz++;
        return *this;
    }
    
    Datum* max() const {
        if (prvi == nullptr)
            return nullptr;
        Datum *m = &prvi->dat;
        for (Elem *tek = prvi->sled; tek; tek = tek->sled) {
            if ((m->uporedi(tek->dat) < 0))
                m = &tek->dat;
        }
        return m;
    }
    
    void ispisi() const {
        for (Elem *tek = prvi; tek; tek=tek->sled) {
            tek->dat.pisi();
        }
    }
    
    ~Lista() {
        while (prvi) {
            Elem *stari = prvi;
            prvi = prvi->sled;
            delete(stari);
        }
    }
};

#endif
