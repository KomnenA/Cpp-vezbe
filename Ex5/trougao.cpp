#include <iostream>
#include <cmath>
#include "trougao.hpp"

using namespace std;

void Trougao::citaj() {
    int aa, bb, cc;
    cout << "Unesite stranice trougla: " << endl;
    cin >> aa >> bb >> cc;
    
    if (moze(aa, bb, cc)) {
        a = aa;
        b = bb;
        c = cc;
    }
    else {
        cout << "Neisparavan unos!" << endl;
        exit(1);
    }
}

void Trougao::pisi() const {
    cout << "Stranice trougla su: " << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << "." << endl;
}

double Trougao::Povrsina() {
    double p, s;
    
    s = (a+b+c)/2;
    p = sqrt((s-a)*(s-b)*(s-c)*s);
    
    return p;
}
