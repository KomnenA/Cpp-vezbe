#include "Sastojak.hpp"

NutritivnaVrednost Sastojak::odrediNVrednost() const {
    
    double u = (kolicina/100)*namirnica.dohvNVrednost().dohvUHidrate();
    double m = (kolicina/100)*namirnica.dohvNVrednost().dohvMasti();
    double p = (kolicina/100)*namirnica.dohvNVrednost().dohvProteine();
    
    return NutritivnaVrednost(u, m, p);
}

double Sastojak::brojKalorija() const {
    
    return (kolicina/100)*namirnica.dohvNVrednost().brojKalorija();
}

ostream& operator<<(ostream& it, const Sastojak& s) {
    
    return it << "[" << s.brojKalorija() << "kcal] " << s.kolicina << "g x" << s.namirnica;
}
