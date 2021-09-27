#include "pozicija.hpp"
#include <math.h>

int operator-(Pozicija poz1, Pozicija poz2) {
    
    return (abs(poz1.dohvV()-poz2.dohvV()) + abs(poz1.dohvK()-poz2.dohvK()));
}
