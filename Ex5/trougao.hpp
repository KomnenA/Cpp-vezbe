#ifndef _trougao_h_
#define _trougao_h_

#include <iostream>

using namespace std;

class Trougao{
    int a, b, c;
    
public:
    
    bool moze(int x, int y, int z) {
        if (x + y > z && x + z > y && y + z > x)
            return true;
        else
            return false;
    }
    
    Trougao(){
    }
    
    void citaj();
    void pisi() const;
    
    double Povrsina();
};

#endif
