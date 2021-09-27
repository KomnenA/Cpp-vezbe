#ifndef VrsteJela_hpp
#define VrsteJela_hpp

#include "Jelo.hpp"

class Predjelo:public Jelo{
    
    int procenat;
    int vreme;
    
public:
    
    Predjelo(string i):Jelo(i) {
        procenat = 0;
        vreme = 0;
    }
    
    char dohvOznaku() const override{
        return 'P';
    }
    
    bool adekvatan(Sastojak* s) const override{
        if (s->dohvVrstu() == Sastojak::SLAN || s->dohvVrstu() == Sastojak::NEUT)
            return true;
        else
            return false;
    }
    
    void postaviProcenat(int proc) override {
        procenat = proc;
    }
    
    void postaviVreme(int h) override{
        vreme = h;
    }
    
    double cenaJela() const override;
};

class GlavnoJelo:public Jelo{
    
    int procenat;
    int vreme;
    
public:
    
    GlavnoJelo(string i):Jelo(i) {
        procenat = 0;
        vreme = 0;
    }
    
    char dohvOznaku() const override{
        return 'G';
    }
    
    bool adekvatan(Sastojak *s) const override{
        if (s->dohvVrstu() == Sastojak::SLAD)
            return false;
        else
            return true;
    }
    
    void postaviProcenat(int proc) override{
        procenat = proc;
    }
    
    void postaviVreme(int h) override{
        vreme = h;
    }
    
    double cenaJela() const override;
};

class Dezert:public Jelo{
    
    int procenat;
    int vreme;
    
public:
    
    Dezert(string i):Jelo(i) {
        
    }
    
    char dohvOznaku() const override{
        return 'D';
    }
    
    bool adekvatan(Sastojak* s) const override{
        if (s->dohvVrstu() == Sastojak::SLAN)
            return false;
        else
            return true;
    }
    
    void postaviVreme(int h) override{
        vreme = 0;
    }
    
    void postaviProcenat(int proc) override{
        procenat = 0;
    }
    
    double cenaJela() const override;
};

#endif /* VrsteJela_hpp */
