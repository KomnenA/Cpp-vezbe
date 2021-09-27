#include "Sastojak.hpp"
#include "Lista.hpp"

int main() {
    
    NutritivnaVrednost n1(5, 6.7, 9.4), n2(5, 6, 10);
    
    NutritivnaVrednost n3 = n1 + n2;
    
    Namirnica n("Namirnica", n3, 0), nn("Namirnica 2", n1, 1);
    
    Sastojak s(n, 300), ss(nn, 400);
    
    cout << n3.brojKalorija() << endl;
    
    cout << s.odrediNVrednost() << endl;
    
    Lista<Sastojak*> l;
    
    l.dodaj(&s);
    l.dodaj(&ss);
    
    l.naPrvi();
    
    cout << *l.dohvPod() << endl;
}
