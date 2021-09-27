#include <iostream>

using namespace std;

class Student {
    
    char *ime;
    int oc1, oc2;
    
public:
    void unesi() {
        cout << "Unesite ime i dve odgovarajuce ocene: " << endl;
        cin >> ime >> oc1 >> oc2;
    }
    double racunaj() {
        return (double)(oc1 + oc2)/2;
    }
    void pisi() {
        cout << "Student: " << ime << endl;
        cout << "Prosecna ocena:" << racunaj() << endl;
    }
};

int main() {
    
    Student st;
    
    st.unesi();
    st.pisi();
    
}
