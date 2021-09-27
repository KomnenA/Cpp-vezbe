#include "Generator.hpp"
#include "VrsteJela.hpp"

int main() {
    
    Slan* S = new Slan("So", 500);
    Sladak* Sl = new Sladak("Krem",1500);
    Neutralan* N = new Neutralan("Hleb", 700);
    
    Predjelo* J1 = new Predjelo("Slano");
    Dezert* J4 = new Dezert("Slatko");
    GlavnoJelo* J3 = new GlavnoJelo("Neutralno");
    Dezert* J2 = new Dezert("Slatko 2");
    Dezert* J5 = new Dezert("Slatko 3");
    Predjelo* J6 = new Predjelo("Slano 2");
    GlavnoJelo* J7 = new GlavnoJelo("Neutralno 2");
    
    J1->dodajSastojak(S, 20);
    J2->dodajSastojak(Sl, 50);
    J3->dodajSastojak(N, 20);
    J4->dodajSastojak(Sl, 100);
    J5->dodajSastojak(Sl, 60);
    J6->dodajSastojak(N, 10);
    J7->dodajSastojak(N, 20);
    
    Jelovnik jelovnik;
    
    jelovnik.dodaj(J1, 2);
    jelovnik.dodaj(J2, 3);
    jelovnik.dodaj(J3, 5);
    jelovnik.dodaj(J4, 10);
    jelovnik.dodaj(J5, 7);
    jelovnik.dodaj(J6, 10);
    jelovnik.dodaj(J7, 20);
    
    Generator g(&jelovnik);
    
    g.napraviMeni(12);
    
    cout << g;
    
}
