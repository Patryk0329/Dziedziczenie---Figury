#ifndef PROSTOKAT_H
#define PROSTOKAT_H

#include "Figura.h"

class Prostokat: public Figura{

    public:
    /**
     * @brief Wartości boków prostokąta
    */
    double a;
    double b;

    /**
    * @brief Konstruktor Prostokąta przyjmujący 2 wartości double 
    * @param a długość boku 1
    * @param b długość boku 2
    */
    Prostokat(double a, double b);

    double obwod() const override;
    double pole() const override;
    void wypisz(std::ostream& os) const override;

};

#endif