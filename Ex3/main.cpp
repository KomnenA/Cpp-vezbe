#include <iostream>
#include <string>

using namespace std;

class Student{
    int godine;
    float procena;
    string ime;
    
public:
    Student(){
        cout << "Unesite ime, godine i prosecnu ocenu studenta:";
        cin >> ime >> godine >> procena;
    }
    void get_info() const {
        cout << ime << endl;
        cout << godine << endl;
        cout << procena << endl;
    }
    void promeni(float br) {
        cout << "Promena prosecne ocene." << endl;
        procena = br;
        cout << "Nova prosecna ocena:" << procena;
    }
};

int main() {
    
    Student st1;
    
    st1.get_info();
}
