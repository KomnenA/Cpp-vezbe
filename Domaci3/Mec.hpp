#ifndef Mec_hpp
#define Mec_hpp

#include "Par.hpp"
#include "Tim.hpp"

class GOdigran{
    
public:
    
    GOdigran() {
        cout << "Greska: Mec nije odigran!";
    }
};

class Mec{
    
public:
    
    enum Ishod{POBEDA_DOMACIN, NERESENO, POBEDA_GOST};
    
private:
    
    Par<Tim> timovi;
    Ishod ishod;
    int poeni_d, poeni_g;
    
public:
    
    Mec(Par<Tim> t):timovi(t) {
        poeni_d = 0;
        poeni_g = 0;
    }
    
    Par<Tim> dohvTimove() const {
        return timovi;
    }
    
    void odigrajMec();
    
    bool daLiJeOdigran() const;
    
    Par<int> dohvParPoena() const;
    
    friend ostream& operator<<(ostream& it, const Mec& m);
};

#endif /* Mec_hpp */
