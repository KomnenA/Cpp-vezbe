#include "Osoba.hpp"

ostream& operator<<(ostream& it, const Osoba& o) {
    
    return it << "O(" << o.ime << "," << o.matBroj << "," << o.datum <<")";
}
