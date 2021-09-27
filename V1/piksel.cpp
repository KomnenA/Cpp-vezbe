#include "piksel.hpp"

Piksel operator+(Piksel p1, Piksel p2) {
    
    Piksel p3;
    p3.crvena = (p1.crvena + p2.crvena)/2;
    p3.zelena = (p1.zelena + p2.zelena)/2;
    p3.plava = (p1.plava + p2.plava)/2;
    
    return p3;
}

bool operator==(Piksel p1, Piksel p2) {
    
    if (p1.crvena - p2.crvena == 0 && p1.zelena - p2.zelena == 0 && p1.plava - p2.plava == 0)
        return true;
    else
        return false;
}

ostream& operator<<(ostream& it, Piksel p) {
    
    it << "(" << p.crvena << "," << p.zelena << "," << p.plava << ")";
    return it;
}
