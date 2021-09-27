#include "Privilegovan.hpp"
#include "Mec.hpp"

int main() {
    
    Igrac i1("Baby", 1100), i2("Patchwork", 1200), i3("Malkoje", 1300);
    
    i1.povecajVrednost(50);
    i1.smanjiVrednost(25);
    i2.povecajVrednost(50);
    
    Tim t("Tim", 3);
    Privilegovan p("Privilegovan", 3, 1205);
    
    t.prikljuciIgraca(&i1, 0);
    t.prikljuciIgraca(&i2, 2);
    
    p.prikljuciIgraca(&i1, 0);
    p.prikljuciIgraca(&i3, 1);
    
    Par<Igrac> par(&i1, &i2);
    
    Par<Tim> par2(&t, &p);
    
    Mec m(par2);
    m.odigrajMec();
    
    cout << m << endl;
    
    i2.smanjiVrednost(60);
    
    m.odigrajMec();
    
    cout << m << endl;
    cout << m.dohvParPoena() << endl;
}
