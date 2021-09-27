#ifndef Tim_hpp
#define Tim_hpp

#include "Igrac.hpp"

class Tim{
    
protected:
    
    string naziv;
    int maxBr;
    int br;
    Igrac** igraci;
    
private:
    
    void kopiraj(const Tim& t);
    void premesti(Tim& t);
    void brisi();
    
    virtual void pisi(ostream& it) const;
    
public:
    
    Tim(string n, int max) {
        naziv = n;
        maxBr = max;
        igraci = new Igrac*[maxBr];
        for (int i = 0; i<maxBr; i++) {
            igraci[i] = nullptr;
        }
        br = 0;
    }
    
    virtual void prikljuciIgraca(Igrac* i, int poz);
    
    int dohvBroj() const {
        return br;
    }
    
    Igrac* operator[](int i);
    const Igrac* operator[](int i) const;
    
    int dohvVrednost() const;
    
    friend bool operator==(const Tim& t1, const Tim& t2);
    
    friend ostream& operator<<(ostream& it, const Tim& t);
    
    friend class Mec;
};

#endif /* Tim_hpp */
