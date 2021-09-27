#ifndef _kvadar_h_
#define _kvadar_h_

#include <iostream>

using namespace std;

class Kvadar{
    
    static double Vuk, Vmax;
    
    double a, b, c;
    
    Kvadar(double aa, double bb, double cc) {
        a = aa;
        b = bb;
        c = cc;
    }
    
public:
    Kvadar(const Kvadar& k) = delete; // nema kopiranja!
    
    /* Kvadar(double aa, double bb, double cc) {
        a = aa;
        b = bb;
        c = cc;
    } */ // prebacuje se u privatnu sekciju!
    
    friend class A;
    
    static double dohvVmax() {
        return Vmax;
    }
    
    static bool postaviVmax(double max) {
        if (max < Vuk)
            return false;
        Vmax = max;
        return true;
    }
    
    static double dohvVuk() {
        return Vuk;
    }
    
    static Kvadar* pravi(double a, double b, double c) {
        double V = a * b * c;
        if (a <= 0 || b<=0 || c<=0 || V+Vuk > Vmax)
            return nullptr;
        Vuk += V;
        return new Kvadar(a, b, c);
    }
    
    static Kvadar* citaj() {
        double a, b, c;
        cin >> a >> b >> c;
        return pravi(a, b, c);
    }
    
    double dohvA() const { return a; }
    double dohvB() const { return b; }
    double dohvC() const { return c; }
    
    double V() const { return a * b * c; }
    
    void pisi() const {
        cout << "Kvadar[" << a << "," << b << "," << c << "]";
    }
    
    friend bool veci(const Kvadar& k1, const Kvadar& k2);
    
    ~Kvadar() {
        Vuk -= a * b * c;
    }
};

#endif
