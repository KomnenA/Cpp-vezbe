#include <iostream>
#include "nizt.h"

using namespace std;

int main() {
    
    Tacka t1(1, 1, 2, 3), t2(1, 2, 2, 4), t3(1, 4, 5, 6);
    
    Nizt niz;
    
    niz.dodaj(t1);
    niz.dodaj(t2);
    niz.dodaj(t3);
    
    cout << "Niz je: " << endl;
    niz.ispisi();
    
    cout << "Tacka najudaljenija od tacke 1 je: " << endl;
    niz.maxr(t1).ispisi();
}
