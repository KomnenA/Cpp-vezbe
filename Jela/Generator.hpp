#ifndef Generator_hpp
#define Generator_hpp

#include "Jelovnik.hpp"

class Generator{
    
    Jelovnik* jelovnik;
    Jelo* meni[3];
    
public:
    
    Generator(Jelovnik* j) {
        jelovnik = j;
        for (int i = 0; i<3; i++) {
            meni[i] = nullptr;
        }
    }
    
    void napraviMeni(int sat);
    
    double dohvCenu() const;
    
    friend ostream& operator<<(ostream& it, const Generator& g);
    
};

#endif /* Generator_hpp */
