#include "Mec.hpp"

void Mec::odigrajMec() {
    
    if (timovi.dohvPrvi()->dohvVrednost() > timovi.dohvDrugi()->dohvVrednost()) {
        ishod = POBEDA_DOMACIN;
        for (int i = 0; i<timovi.dohvPrvi()->maxBr; i++) {
            if (timovi.dohvPrvi()->igraci[i])
                timovi.dohvPrvi()->igraci[i]->povecajVrednost(10);
            if (timovi.dohvDrugi()->igraci[i])
                timovi.dohvDrugi()->igraci[i]->smanjiVrednost(10);
        }
        poeni_d += 3;
    }
    else if (timovi.dohvPrvi()->dohvVrednost() < timovi.dohvDrugi()->dohvVrednost()) {
        ishod = POBEDA_GOST;
        for (int i = 0; i<timovi.dohvPrvi()->maxBr; i++) {
            if (timovi.dohvPrvi()->igraci[i])
                timovi.dohvPrvi()->igraci[i]->povecajVrednost(10);
            if (timovi.dohvDrugi()->igraci[i])
                timovi.dohvDrugi()->igraci[i]->smanjiVrednost(10);
        }
        poeni_g += 3;
    }
    else {
        ishod = NERESENO;
        poeni_d += 1;
        poeni_g += 1;
    }
}

bool Mec::daLiJeOdigran() const {
    
    if (ishod == POBEDA_DOMACIN || ishod == POBEDA_GOST || ishod == NERESENO)
        return true;
    else
        return false;
}

Par<int> Mec::dohvParPoena() const {
    
    if (!daLiJeOdigran())
        throw GOdigran();
    static int p1 = poeni_d;
    static int p2 = poeni_g;
    Par<int> poeni(&p1, &p2);
    
    return poeni;    
}

ostream& operator<<(ostream& it, const Mec& m) {
    
    it << m.timovi << endl;
    
    if (m.daLiJeOdigran()) {
        const string s[] = {"POBEDA_DOMACIN", "NERESENO", "POBEDA_GOST"};
        it << s[m.ishod] << endl;
    }
    
    return it;
}
