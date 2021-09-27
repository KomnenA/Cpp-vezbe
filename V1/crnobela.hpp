#ifndef _crnobela_h_
#define _crnobela_h_

#include "slika.hpp"

class Crnobela:public Slika{
    
public:
    
    Crnobela(int m, int n):Slika(m, n) {
        matr = new Piksel*[m];
        for (int i = 0; i<m; i++) {
            matr[i] = new Piksel[n];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matr[i][j] = Piksel();
            }
        }
    }
    
    void postPiksel(Piksel pik, Pozicija poz);
    
};

#endif
