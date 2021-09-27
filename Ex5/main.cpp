#include <iostream>
#include "trougao.hpp"

using namespace std;

int main() {
    
    Trougao t1;
    
    t1.citaj();
    t1.pisi();
    
    // cout << "Povrsina trougla je: " << t1.Povrsina() << endl;
    
    Trougao t2;
    
    t2.citaj();
    t2.pisi();
    
    if (t1.Povrsina() > t2.Povrsina())
        cout << "Prvi trougao ima vecu povrsinu." << endl;
    else
        cout << "Drugi trougao ima vecu povrsinu." << endl;
}
