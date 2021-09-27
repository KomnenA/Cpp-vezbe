#include "NutritivnaVrednost.hpp"

NutritivnaVrednost operator+(const NutritivnaVrednost& n1, const NutritivnaVrednost& n2) {
    
    double u = n1.ugljeniHidrati + n2.ugljeniHidrati;
    double m = n1.masti + n2.masti;
    double p = n1.proteini + n2.proteini;
    
    return NutritivnaVrednost(u, m, p);
}

double NutritivnaVrednost::brojKalorija() const {
    return ugljeniHidrati* 4 + proteini*4 + masti*9;
}

ostream& operator<<(ostream& it, const NutritivnaVrednost& n) {
    
    return it << "[uh: " << n.ugljeniHidrati << ", ma: " << n.masti << ", pr: " << n.proteini << "]";
}
