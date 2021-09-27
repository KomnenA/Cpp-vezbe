#include "Igrac.hpp"

Igrac& Igrac::smanjiVrednost(int procenat) {
    
    vrednost -= (vrednost * procenat)/100;
    return *this;
}

Igrac& Igrac::povecajVrednost(int procenat) {
    
    vrednost += (vrednost * procenat)/100;
    return *this;
}

bool operator==(const Igrac& i1, const Igrac& i2) {
    
    return (i1.ime == i2.ime && i1.vrednost == i2.vrednost);
}

ostream& operator<<(ostream& it, const Igrac& i) {
    
    return it << i.ime << "#" << i.vrednost;
}
