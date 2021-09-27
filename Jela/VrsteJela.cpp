#include "VrsteJela.hpp"

double Predjelo::cenaJela() const {
    
    if (vreme >= 9 && vreme <= 12)
        return Jelo::cenaJela()*(100-procenat)/100;
    else
        return Jelo::cenaJela();
}

double GlavnoJelo::cenaJela() const {
    
    if (vreme >= 20 && vreme <= 23)
        return Jelo::cenaJela()*(100+procenat)/100;
    else
        return Jelo::cenaJela();
}

double Dezert::cenaJela() const {
    
    return Jelo::cenaJela();
}
