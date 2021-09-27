#include "izvodjac.h"

#include <cstring>
#include <iostream>

using namespace std;

string Izvodjac::str_zanr[] = {"POP", "REP", "ROK"};

void Izvodjac::ispisi() const {
    cout << naziv << "(" << str_zanr[zanr] << ")";
}
