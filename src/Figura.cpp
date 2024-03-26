#include "Figura.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Figura &object)
{
  os << std::setprecision(6) << std::fixed;
  object.wypisz(os);
  return os;
}