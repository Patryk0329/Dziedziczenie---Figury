#include "Kwadrat.h"

Kwadrat::Kwadrat(double a): Prostokat(a, a){}


void Kwadrat::wypisz(std::ostream& os) const 
{
    os << "Kwadrat o boku a=" << a << ", Pole: " << pole() << ", Obwód: " << obwod();
}