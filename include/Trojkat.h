#ifndef TROJKAT_H
#define TROJKAT_H

#include "Figura.h"

class Trojkat: public Figura{

    public:

    /**
     * @brief wartości boków trójkąta 
     */
    double a, b, c;

    /**
     * @brief Konstruktor Trojkata przyjmujący 3 wartości double
    * @param a długość 1 boku
     * @param b długość 2 boku
    * @param c długość 3 boku
    */
    Trojkat(double a, double b, double c);

    double obwod() const override;
    double pole() const override;
    void wypisz(std::ostream& os) const override;

};

#endif