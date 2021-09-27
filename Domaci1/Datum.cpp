#include "Datum.hpp"

bool operator==(const Datum& d1, const Datum& d2) {
    return (d1.d == d2.d && d1.m == d2.m && d1.g == d2.g);
}

ostream& operator<<(ostream& it, const Datum& d) {
    return it << d.d << "." << d.m << "." << d.g << ".";
}
