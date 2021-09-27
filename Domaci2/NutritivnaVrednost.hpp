#ifndef NutritivnaVrednost_hpp
#define NutritivnaVrednost_hpp

#include <iostream>

using namespace std;

class NutritivnaVrednost {
    
    double ugljeniHidrati;
    double masti;
    double proteini;
    
public:
    
    NutritivnaVrednost(double u, double m, double p){
        ugljeniHidrati = u;
        masti = m;
        proteini = p;
    }
    
    double dohvUHidrate() const {
        return ugljeniHidrati;
    }
    double dohvMasti() const {
        return masti;
    }
    double dohvProteine() const {
        return proteini;
    }
    
    friend NutritivnaVrednost operator+(const NutritivnaVrednost& n1, const NutritivnaVrednost& n2);
    
    double brojKalorija() const;
    
    friend ostream& operator<<(ostream& it, const NutritivnaVrednost& n);
};

#endif /* NutritivnaVrednost_hpp */
