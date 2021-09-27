#include <iostream>
#include "tacka.h"
#include <cmath>

using namespace std;

double Tacka::rastojanje(Tacka t) const {
    return sqrt(pow(this->x - t.x, 2) + pow(this -> y - t.y, 2)); // umesto this-> x moze x;
}

int main() {
    
    Tacka t1;
    double x, y;
    
    cout << "Unesite koordinate:" << endl;
    cin >> x >> y;
    
    t1.postavi(x, y);
    cout << endl;
    
    cout << "Uneta tacka je: " << endl;
    t1.pisi();
    
    Tacka t2;
    cout << "Unesite koordinate druge tacke: " << endl;
    t2.citaj();
    cout << "Uneta tacka je: " << endl;
    t2.pisi();
    cout << endl;
    
    cout << "Rastojanje je: " << t1.rastojanje(t2) << endl;
    
}
