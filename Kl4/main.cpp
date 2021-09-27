#include <iostream>
#include "ugao.h"

using namespace std;

int main() {
    
    Ugao u1, u2;
    Ugao u3(10);
    Ugao u4(30, 20, 10);
    
    cout << "Prvi ugao [rad]?";
    u1.citaj();
    cout << "Drugi ugao [rad]?";
    u2.citaj();
    
    /* u1.dodaj(u2).pomnozi(2);
    
    u1.pisi(); */
    
    Ugao sr = Ugao(u1).dodaj(u2).pomnozi(0.5); // Kopirajuci konstruktor
    cout << "Srednja vrednost je: ";
    sr.pisi();
    cout << endl;
    cout << "Ugao 1:";
    u1.pisi();
}
