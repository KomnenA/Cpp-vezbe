#include <iostream>
#include <cmath>
#include "tacka.hpp"

double Tacka::rastojanje(Tacka t2) {
    double r;
    r = sqrt((pow(t2.x-this->x, 2))+pow(t2.y-this->y,2));
    return r;
}
