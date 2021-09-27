#ifndef _slika_h_
#define _slika_h_
#include "piksel.hpp"
#include "pozicija.hpp"

class Slika{

protected:
    
    int m, n;
    Piksel** matr;
    
public:
    
    Slika(int sirina, int visina) {
        m = sirina;
        n = visina;
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
    
    Slika(const Slika& s) {
        
        m = s.m;
        n = s.n;
        matr = new Piksel*[m];
        for (int i = 0; i<m; i++) {
            matr[i] = new Piksel[n];
        }
        for (int i = 0; i<m; i++) {
            for (int j=0; j<n; j++) {
                matr[i][j] = s.matr[i][j];
            }
        }
    }
    
    Slika(Slika&& s) {
        
        m = s.m;
        n = s.n;
        matr = new Piksel*[m];
        for (int i = 0; i<m; i++) {
            matr[i] = new Piksel[n];
        }
        for (int i = 0; i<m; i++) {
            for (int j=0; j<n; j++) {
                matr[i][j] = s.matr[i][j];
            }
        }
        for (int i = 0; i<m; i++) {
            delete [] s.matr[i];
        }
        delete [] s.matr;
    }
    
    int dohvM() const {
        return m;
    }
    
    int dohvN() const {
        return n;
    }
    
    const Piksel& operator[](Pozicija p) const;
    
    virtual void postPiksel(Piksel pik, Pozicija poz);
    
    int dohvVelicinu() const;
    
    friend ostream& operator<<(ostream& it, Slika s);
    
    ~Slika() {
        
        for (int i=0; i<m; i++) {
            delete [] matr[i];
        }
        delete [] matr;
    }
};

#endif
