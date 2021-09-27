#ifndef Lista_hpp
#define Lista_hpp

#include <iostream>

using namespace std;

class GTek {
    
public:
    
    GTek() {
        cout << "Greska: Ne postoji tekuci element!";
    }
};

template <typename T>

class Lista{
    struct Elem{
        T podatak;
        Elem* sled;
        Elem(const T& p):podatak(p){
            sled = nullptr;
        }
    };
    Elem* prvi, *posl;
    mutable Elem* tek;
    
public:
    
    Lista() {
        prvi = posl = tek = nullptr;
    }
    
    Lista(const Lista&) = delete;
    Lista& operator=(const Lista&) = delete;
    
    Lista& dodaj(const T& pod) {
        posl = (!prvi ? prvi : posl->sled) = new Elem(pod);
        return *this;
    }
    
    void naPrvi() const {
        tek = prvi;
    }
    void naSled() const {
        if (tek)
            tek = tek->sled;
    }
    bool imaTek() const {
        return tek!=nullptr;
    }
    
    T dohvPod() const {
        if (!tek)
            throw GTek();
        return tek->podatak;
    }
    
    void isprazni();
    
    ~Lista() {
        
        while(prvi) {
            Elem* stari = prvi;
            prvi = prvi->sled;
            delete stari;
        }
    }
};

template <typename T>

void Lista<T>::isprazni() {
    
    for (naPrvi(); imaTek(); naSled()) {
        tek->podatak = nullptr;
    }
}

#endif /* Lista_hpp */
