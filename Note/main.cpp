#include <iostream>

#include "Kompozicija.hpp"

int main() {
    
    Razlomak r1(1,3);
    Nota n1(4, Nota::RE, r1);
    Takt t1(Razlomak(1,1));
    Kompozicija k1;
    
    t1.dodaj(n1);
    t1.zavrsiTakt();
    k1.dodaj(t1);
    
    cout << k1;
}
