#include "piksel.hpp"
#include "pozicija.hpp"
#include "slika.hpp"
#include "crnobela.hpp"


int main() {
    
    Piksel p1(5, 10, 15);
    Piksel p2(100, 200, 160);
    Piksel p3 = p1 + p2;
    
    // cout << p3; //
    
    /* Pozicija p1(5, 6), p2(4, 10);
    
    cout << p1-p2; */
    
    Slika s1(1, 3);
    
    Pozicija poz1(0, 0), poz2(0, 1), poz3(0, 2);
    
    s1.postPiksel(p1, poz1);
    s1.postPiksel(p2, poz2);
    s1.postPiksel(p3, poz3);
    
    cout << s1;
    
    Crnobela cb1(1, 3);
    
    cb1.postPiksel(p1, poz1);
    cb1.postPiksel(p2, poz2);
    cb1.postPiksel(p3, poz3);
    
    cout << cb1;
}
