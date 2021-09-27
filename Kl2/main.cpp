#include <iostream>

using namespace std;

class Rectangle {
    int x, y;
    
public:
    void citaj() {
        cout << "Unesite duzine stranica pravougaonika: " << endl;
        cin >> x >> y;
    }
    int povrsina() {
        return x*y;
    }
};
int main() {
    
    Rectangle pr;
    
    pr.citaj();
    cout << "Povrsina pravougaonika je: " << endl;
    cout << pr.povrsina();
    
}
