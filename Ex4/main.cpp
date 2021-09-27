#include <iostream>
#include "tacka.hpp"

using namespace std;

int main() {
    
    cout << "Unesite koordinate prve tacke: " << endl;
    Tacka t1;
    cout << "Unesite koordinate druge tacke: " << endl;
    Tacka t2;
    
    t1.pisi();
    t2.pisi();
    
    t1.citaj(10, 5);
    t1.pisi();
    
    double distance = t1.rastojanje(t2);
    cout << "Rastojanje izmedju ove dve tacke je: " << distance << endl;
}
