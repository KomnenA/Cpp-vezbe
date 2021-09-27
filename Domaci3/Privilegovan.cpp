#include "Privilegovan.hpp"

void Privilegovan::prikljuciIgraca(Igrac* i, int poz) {
    
    if (i->dohvVrednost() < minVrednost)
        throw GIgrac();
    else
        Tim::prikljuciIgraca(i, poz);
}

void Privilegovan::pisi(ostream& it) const {
    
    int broj = 0;
    it << naziv << "(" << minVrednost << ")" << "[";
    for (int i = 0; i<maxBr; i++) {
        if (igraci[i]) {
            if (broj == br - 1) {
                broj++;
                it << *igraci[i];
            }
            else {
                it << *igraci[i] << ",";
                broj++;
            }
        }
    }
    it << "]";
}
