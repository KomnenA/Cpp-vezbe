#include "Dinarski.hpp"

int main() {
    
    Datum d1(1,3,2005), d2(1,3,2005);
    
    Osoba o1("Baby", "192832", d1);
    
    Dinarski d(&o1, 1), dd(&o1, 2);
    
    d+=10000;
    d.prenesiIznos(7000, dd);
    
    cout << d << endl;
    cout << dd << endl;
    
    cout << *d.dohvVlasnika() << endl;
}
