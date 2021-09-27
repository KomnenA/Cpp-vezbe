#include <iostream>
#include <string>

using namespace std;

class Auto {
    
    int godina;
    string ime;

public:
    Auto() {
        cout << "Unesite godinu i ime:" << endl;
        cin >> godina >> ime;
    }
    void ispisi() {
        cout << godina << endl;
        cout << ime << endl;
    }
    void pisi_ime() {
        cout << ime;
    }
    void pisi_godinu() {
        cout << godina;
    }
};

int main() {
    
    Auto obj1;
    
    cout << "Ime: ";
    obj1.pisi_ime();
    cout << ", godina proizvodnje: ";
    obj1.pisi_godinu();
    cout << "." << endl;
}
