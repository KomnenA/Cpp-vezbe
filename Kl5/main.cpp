#include <iostream>
#include "red.h"

using namespace std;

int main() {
    
    /* Red r1(5);
     Red r2 = 5; */ // moze ako nije eksplicitno
    
    Red* rd = new Red(5);
    bool kraj = false;
    
    while (!kraj) {
        cout << "\n1. Stvaranje reda\n"
        "2. Stavljanje podatka u red\n"
        "3. Uzimanje podatka iz reda\n"
        "4. Ispisivanje sadrzaja reda\n"
        "5. Praznjenje reda\n"
        "0. Zavrsetak rada\n\n"
        "Vas izbor?";
        
        int izbor;
        cin >> izbor;
        
        switch (izbor) {
            case 1:
                cout << "Kapacitet reda?";
                int k;
                cin >> k;
                if (k > 0) {
                    delete rd;
                rd = new Red(k);
                }
                else
                    cout << "Greska!";
                break;
                
            case 2:
                if (!rd->pun()) {
                    cout << "Unesite novi element:" << endl;
                    int broj;
                    cin >> broj;
                    rd->stavi(broj);
                }
                else
                    cout << "Greska!" << endl;
                break;
                
            case 3:
                if(!rd->prazan()) {
                    cout << "Broj= " << rd->uzmi() << endl;
                }
                else
                    cout << "Greska!";
                break;
                
            case 4:
                cout << "Red= ";
                rd->pisi();
                cout << endl;
                break;
                
            case 5:
                rd -> prazni();
                break;
                
            case 0:
                kraj = true;
                break;
                
            default:
                cout << "Greska!";
                cout << endl;
                
        
    }
  }
}
