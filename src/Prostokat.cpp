#include "Prostokat.h"

Prostokat::Prostokat(double a, double b): a(a), b(b){}

double Prostokat::obwod() const
{
    return 2*(a+b);
}

double Prostokat::pole() const
{
    return a*b;
}

void Prostokat::wypisz(std::ostream& os) const
{
   os << "Prostokąt o bokach a=" << a << ", b=" << b << ", Pole: " << pole() << ", Obwód: " << obwod();
}
