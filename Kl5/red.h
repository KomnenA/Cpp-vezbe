#ifndef _red_h_
#define _red_h_

class Red{
  
    int *niz, kap, duz, prvi, posl;
    
public:
    
    explicit Red(int k);
    Red(const Red& rd);
    Red(Red&& rd);
    
    void stavi(int b);
    int uzmi();
    
    bool prazan() const {
        return duz == 0;
    }
    bool pun() const {
        return duz == kap;
    }
    
    void pisi() const;
    
    void prazni() {
        duz = prvi = posl = 0;
    }
    
    ~Red();
};

#endif
