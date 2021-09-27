#include "red.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Red::Red(int k) {
    niz = new int[k];
    kap = k;
    duz = prvi = posl = 0;
}

Red::Red(const Red& rd) {
   /* niz = rd.niz;
    duz = rd.duz;
    prvi = rd.prvi;
    posl = rd.posl; */
    
    // iznad je plitka kopija
    
    niz = new int[rd.kap];
    for (int i = 0; i<rd.kap; i++) {
        niz[i] = rd.niz[i];
    }
    duz = rd.duz;
    prvi = rd.prvi;
    posl = rd.posl;
    
    // iznad je duboka kopija
}

Red::Red(Red&& rd) {
    niz = rd.niz;
    duz = rd.duz;
    prvi = rd.prvi;
    posl = rd.posl;
    kap = rd.kap;
    
    rd.niz = nullptr;
}

Red::~Red() {
    delete[] niz;
}

void Red::stavi(int b) {
    if (duz == kap)
        exit(1);
    niz[posl++] = b;
    if (posl == kap)
        posl = 0;
    duz++;
}

int Red::uzmi() {
    if (duz == 0)
        exit(2);
    int b = niz[prvi++];
    if (prvi == kap)
        prvi = 0;
    duz--;
    
    return b;
}

void Red::pisi() const {
    for (int i = 0; i<duz; i++) {
        cout << niz[(prvi+i) % kap] << " ";
    }
}
