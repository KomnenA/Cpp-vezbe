#ifndef Jelovnik_hpp
#define Jelovnik_hpp

#include "Lista.hpp"
#include "Jelo.hpp"

class Jelovnik:public Lista<Jelo*>{
    
public:
    
    Jelovnik():Lista<Jelo*>() {
        
    }
};

#endif /* Jelovnik_hpp */
