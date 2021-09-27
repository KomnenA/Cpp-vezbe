#ifndef _jmbg_h_
#define _jmbg_h_
#include <cstring>
#include <iostream>

using namespace std;

class JMBG {
    
   char jmbg[14];
    
public:
    
    JMBG(const char j[]) {
        strcpy(jmbg, j);
    }
    
    string dohvJmbg() const {
        return jmbg;
    }
    
    friend bool veci(const JMBG& j1, const JMBG& j2) {
        return strcmp(j1.jmbg, j2.jmbg) > 0;
    }
    
    void pisi() const {
        cout << jmbg;
    }
    
};

#endif
