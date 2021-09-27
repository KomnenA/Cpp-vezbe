#include <iostream>
#include <string>

using namespace std;


class Klasa {
    
public:
    int broj;
    string ime;
    
    int funkcija(int broj2);
};

int Klasa::funkcija(int broj2) {
    cout << broj << endl;
    cout << ime << endl;
    return broj2;
}

int main() {
    
    Klasa objekat;
    
    objekat.broj = 17;
    objekat.ime = "Sara";
    cout << objekat.funkcija(5);
}
