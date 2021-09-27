#include "Namirnica.hpp"

bool operator==(const Namirnica& n1, const Namirnica& n2) {
    
    return n1.naziv == n2.naziv;
}

ostream& operator<<(ostream& it, const Namirnica& n) {
    
    return it << n.naziv << "-" << n.nVrednost;
}
