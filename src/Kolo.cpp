#include "Kolo.h"
#include <cmath>

Kolo::Kolo(double r): r(r){}

double Kolo::obwod() const
{
    return 2 * M_PI * r;
}

double Kolo::pole() const
{
    return  M_PI * r * r;
}

void Kolo::wypisz(std::ostream& os) const
{
    os << "Koło o promieniu " << r << ", Pole: " << pole() << ", Obwód: " << obwod();
}