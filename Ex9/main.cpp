#include <iostream>
#include "lista.h"

using namespace std;

int main() {
    
    Datum d1(1, 5, 2015), d2(2, 6, 2017), d3(4, 10, 2019);
    
    Lista l;
    l.dodaj(d1);
    l.dodaj(d2);
    l.dodaj(d3);
    
    l.ispisi();
    l.max()->pisi();
}
