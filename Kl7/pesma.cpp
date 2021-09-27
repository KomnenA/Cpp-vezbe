#include "pesma.h"

#include <iostream>

using namespace std;

void Pesma::ispisi() const {
    cout << "P(" << naziv << "-" << min << ":" << sek << ")" << endl;
    cout << "Izvodjaci:" << endl;
    for (int i = 0; i<br; i++) {
        izv[i]->ispisi();
        cout << endl;
    }
}
