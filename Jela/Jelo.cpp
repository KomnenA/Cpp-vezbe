#include "Jelo.hpp"

double Jelo::cenaJela() const {
    
    double c = 0;
    for(sastojci.naPrvi(); sastojci.imaTek(); sastojci.naSled()) {
        c += sastojci.dohvPodatak()->izracunajCenu(sastojci.dohvVrednost());
    }
    return c;
}

void Jelo::brisi() {
    
    for (sastojci.naPrvi(); sastojci.imaTek(); sastojci.naSled()) {
        delete sastojci.dohvPodatak();
    }
}

ostream& operator<<(ostream& it, const Jelo& j) {
    
    it << j.ime << ":" << j.cenaJela() << endl;
    
    for (j.sastojci.naPrvi(); j.sastojci.imaTek(); j.sastojci.naSled()) {
        it << *(j.sastojci.dohvPodatak()) << ":" << j.sastojci.dohvVrednost() << endl;
    }
    return it;
}


