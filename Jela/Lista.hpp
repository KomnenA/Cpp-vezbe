#ifndef Lista_hpp
#define Lista_hpp

#include <iostream>

using namespace std;

class GNemaTek{

public:
    
    GNemaTek() {
        cout << "Greska: Ne postoji tekuci element!";
    }
};

template <typename T>

class Lista{
    
    struct Elem{
        T podatak;
        int vrednost;
        Elem* sled;
        Elem(const T& pod, int vr) {
            podatak = pod;
            vrednost = vr;
            sled = nullptr;
        }
    };
    Elem *prvi, *posl;
    int br;
    mutable Elem* tek;
    void brisi();
    
public:
    
    Lista() {
        prvi = posl = tek = nullptr;
        br = 0;
    }
    Lista(const Lista&) = delete;
    Lista& operator=(const Lista&) = delete;
    
    ~Lista(){
        brisi();
    }
    
    Lista& dodaj(const T& p, int v){
        posl = (!prvi ? prvi : posl->sled) = new Elem(p,v);
        br++;
        return *this;
    }
    
    int dohvBroj() const {
        return br;
    }
    
    void naPrvi() const {
        tek = prvi;
    }
    
    void naSled() const {
        if (tek)
            tek = tek->sled;
    }
    
    bool imaTek() const {
        return tek != nullptr;
    }
    
    T& dohvPodatak() const {
        if (!tek)
            throw GNemaTek();
        return tek->podatak;
    }
    
    int& dohvVrednost() const{
        if (!tek)
            throw GNemaTek();
        return tek->vrednost;
    }
    
};

template <typename T>

void Lista<T>::brisi() {
    
    while (prvi){
        Elem* stari = prvi;
        prvi = prvi->sled;
        delete stari;
    }
    posl = tek = nullptr;
}

#endif /* Lista_hpp */
