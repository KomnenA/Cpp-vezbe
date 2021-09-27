#ifndef Par_hpp
#define Par_hpp

#include <iostream>

using namespace std;

template <typename T>

class Par{
    
    T* pod1, *pod2;
    
public:
    
    Par(T* p1, T* p2) {
        pod1 = p1;
        pod2 = p2;
    }
    
    T* dohvPrvi() const {
        return pod1;
    }
    T* dohvDrugi() const {
        return pod2;
    }
    void postaviPrvi(T* prvi) {
        pod1 = prvi;
    }
    void postaviDrugi(T* drugi) {
        pod2 = drugi;
    }
    
    friend bool operator==(const Par& p1, const Par& p2) {
        
        return (p1.pod1 == p2.pod1 && p2.pod1 == p2.pod2);
    }
    
    friend ostream& operator<<(ostream& it, const Par& p) {
        
        return it << "[" << *p.pod1 << "-" << *p.pod2 << "]";
    }
};

#endif /* Par_hpp */
