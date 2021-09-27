#ifndef Sekvenca_hpp
#define Sekvenca_hpp

#include <iostream>

using namespace std;

class GDodaj {
    
public:
    
    GDodaj() {
        cout << "Greska: Dodavanje nije moguce!";
    }
};

class GIndeks{
    
public:
    
    GIndeks(){
        cout << "Greska: Neodgovarajuci indeks!";
        
    }
};

template <typename T>

class Sekvenca{
    
    struct Elem{
        T podatak;
        Elem* sled;
        Elem(const T& pod) {
            podatak = pod;
            sled = nullptr;
        }
    };
    Elem* prvi, *posl;
    bool moze = true;
    int duz;
    void kopiraj(const Sekvenca& s);
    void premesti(Sekvenca& s);
    void brisi();
    
public:
    
    Sekvenca() {
        prvi = posl = nullptr;
        duz = 0;
    }
    
    Sekvenca(const Sekvenca& s){
        kopiraj(s);
    }
    Sekvenca& operator=(const Sekvenca& s){
        if (this != &s) {
            brisi();
            kopiraj(s);
        }
        return *this;
    }
    Sekvenca(Sekvenca&& s){
        premesti(s);
    }
    Sekvenca& operator=(Sekvenca&& s){
        if (this != &s) {
            brisi();
            premesti(s);
        }
        return *this;
    }
    
    int dohvDuzinu() const {
        return duz;
    }
    
    Sekvenca& dodaj(const T& t) {
        if (!moze)
            throw GDodaj();
        posl = (!prvi ? prvi : posl->sled) = new Elem(t);
        duz++;
        return *this;
    }
    
    T uzmi();
    
    T& operator[](int i);
    const T& operator[](int i) const;
    
    ~Sekvenca() {
        brisi();
    }
    
};

template <typename T>
void Sekvenca<T>::kopiraj(const Sekvenca& s) {
    duz = 0;
    moze = true;
    for (Elem* tek = s.prvi; tek; tek=tek->sled) {
        dodaj(tek->podatak);
    }
}

template <typename T>
void Sekvenca<T>::premesti(Sekvenca& s) {
    duz = s.duz;
    moze = s.moze;
    prvi = s.prvi;
    posl = s.posl;
    s.prvi = s.posl = nullptr;
}

template <typename T>
void Sekvenca<T>::brisi() {
    while(prvi) {
        Elem* stari = prvi;
        prvi = prvi->sled;
        delete stari;
    }
    posl = nullptr;
}

template <typename T>
T Sekvenca<T>::uzmi(){
    T t = prvi->podatak;
    Elem* pom = prvi;
    prvi = prvi->sled;
    if (!prvi)
        posl = prvi;
    delete pom;
    return t;
}

template <typename T>
T& Sekvenca<T>::operator[](int i) {
    if (i < 0 || i >= duz)
        throw GIndeks();
    Elem* tek = prvi;
    for (int br = 1; br<i; br++){
        tek = tek->sled;
    }
    return tek->podatak;
}

template <typename T>
const T& Sekvenca<T>::operator[](int i) const{
    return const_cast<Sekvenca&>(*this)[i];
}

#endif /* Sekvenca_hpp */
