#include "Bankovni.hpp"

Bankovni& Bankovni::operator+=(double vrednost) {
    
    iznos += vrednost;
    return *this;
}

void Bankovni::prenesiIznos(double i, Bankovni& racun) {
    
    if (iznos < i)
        cout << "Neuspesan prenos sredstava." << endl;
    else {
        iznos -= i;
        racun.iznos += i;
        cout << "Uspesan prenos sredstava." << endl;
    }
}

ostream& operator<<(ostream& it, const Bankovni& r) {
    
    return it << "R:" << r.brRacuna << ":=:" << r.iznos << "-" << r.dohvOznakuValute();
}
