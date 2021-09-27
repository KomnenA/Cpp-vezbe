#include <iostream>
#include "kvadar.hpp"

using namespace std;

bool veci(const Kvadar& k1, const Kvadar& k2) {
    // return k1.V() > k2.V();
    
    double V1 = k1.a * k1.b * k1.c; // prijateljske funkcije pristupaju privatnim poljima
    double V2 = k2.a * k2.b * k2.c;
    return V1 > V2;
}

int main() {
    
    /* Kvadar::postaviVmax(300);
    
    cout << Kvadar::dohvVmax() << endl;
    
    Kvadar* k1 = Kvadar::pravi(2, 4, 6); */ // primer koriscenja static funkcija
    
    cout << "Unesite maksimalnu zapreminu: ";
    double Vm;
    cin >> Vm;
    Kvadar::postaviVmax(Vm);
    
    struct Elem {
        Kvadar* kvad;
        Elem* sled;
        
        Elem(Kvadar* kv) {
            kvad = kv;
            sled = nullptr;
        }
        ~Elem() {
            delete kvad;
        }
    };
    
    for (char jos = 'd'; jos == 'd' || jos == 'D'; cout << "\nJos?", cin >> jos) {
        Elem *prvi = nullptr;
        Elem *posl = nullptr;
        
        while (true) {
            cout << "a, b, c?";
            Kvadar *kv = Kvadar::citaj();
            if (kv != nullptr)
                posl = (!prvi ? prvi : posl->sled) = new Elem(kv);
            else
                break;
        }
        
        cout << "Zapremine: ";
        for (Elem* tek = prvi; tek; tek = tek->sled) {
            cout << tek->kvad->V() << endl;
        }
        cout << "Ukupna zapremina: " << Kvadar::dohvVuk() << endl;
        
        while (prvi) {
            Elem *stari = prvi;
            prvi = prvi -> sled;
            delete(stari);
        }
        
        cout << "Ukupna zapremina nakon brisanja: " << Kvadar::dohvVuk() << endl;
    }
}
