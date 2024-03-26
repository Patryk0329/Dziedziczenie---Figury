#include "Trojkat.h"
#include "cmath"

Trojkat::Trojkat(double a, double b, double c): a(a), b(b), c(c){}

double Trojkat::obwod() const
{
    return a+b+c;
}

double Trojkat::pole() const
{
    double x = obwod()/2;
    return sqrt(x * (x-a) * (x-b) * (x-c));
}

void Trojkat::wypisz(std::ostream& os) const
{
    os << "Trójkąt o bokach a=" << a << ", b=" << b << ", c=" << c << ", Pole: " << pole() << ", Obwód: " << obwod();
}
