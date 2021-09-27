#include "crnobela.hpp"

void Crnobela::postPiksel(Piksel pik, Pozicija poz) {
    
    if ((pik.dohvZ() + pik.dohvP() + pik.dohvC())/3 > 127)
        matr[poz.dohvV()][poz.dohvK()] = Piksel(255, 255, 255);
    else
        matr[poz.dohvV()][poz.dohvK()] = Piksel(0, 0, 0);
}
