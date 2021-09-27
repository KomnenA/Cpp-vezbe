#include "slika.hpp"

const Piksel& Slika::operator[](Pozicija p) const {
    
    if (p.dohvV() > m || p.dohvK() > n)
        exit(1);
    else
        return matr[p.dohvV()][p.dohvK()];
}

void Slika::postPiksel(Piksel pik, Pozicija poz) {
    
    matr[poz.dohvV()][poz.dohvK()] = pik;
}

int Slika::dohvVelicinu() const {
    
    return m*n*24;
}

ostream& operator<<(ostream& it, Slika s) {
    
    it << s.dohvVelicinu() << endl;
    
    for (int i = 0; i<s.dohvM(); i++) {
        for (int j = 0; j<s.dohvN(); j++) {
            it << s[Pozicija(i,j)] << " ";
        }
        it << endl;
    }
    
    return it;
}
