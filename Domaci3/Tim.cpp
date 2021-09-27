#include "Tim.hpp"

void Tim::kopiraj(const Tim& t) {
    
    naziv = t.naziv;
    maxBr = t.maxBr;
    br = t.br;
    
    Igrac** igraci = new Igrac*[maxBr];
    for (int i = 0; i<maxBr; i++) {
        igraci[i] = t.igraci[i];
    }
}

void Tim::premesti(Tim& t) {
    
    naziv = t.naziv;
    maxBr = t.maxBr;
    br = t.br;
    
    igraci = t.igraci;
    t.igraci = nullptr;
    t.br = 0;
}

void Tim::brisi() {
    
    delete [] igraci;
    br = 0;
}

void Tim::prikljuciIgraca(Igrac* i, int poz) {
    
    igraci[poz] = i;
    br++;
}

Igrac* Tim::operator[](int i) {
    
    return igraci[i];
}

const Igrac* Tim::operator[](int i) const {
    
    return const_cast<Tim&>(*this)[i];
}

int Tim::dohvVrednost() const {
    
    int s = 0;
    for (int i = 0; i<maxBr; i++) {
        if (igraci[i])
            s += igraci[i]->dohvVrednost();
    }
    if (s > 0)
        s /= br;
    return s;
}

bool operator==(const Tim& t1, const Tim& t2) {
    
    if (t1.naziv != t2.naziv)
        return false;
    if (t1.maxBr != t2.maxBr)
        return false;
    
    for (int i = 0; i<t1.maxBr; i++) {
        if (t1.igraci[i] != t2.igraci[i])
            return false;
    }
    return true;
}

void Tim::pisi(ostream& it) const {
    
    int broj = 0;
    it << naziv << "[";
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

ostream& operator<<(ostream& it, const Tim& t) {
    
    t.pisi(it);
    return it;
}
