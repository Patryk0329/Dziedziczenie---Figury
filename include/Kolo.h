#ifndef KOLO_H
#define KOLO_H

#include "Figura.h"

class Kolo: public Figura{
    public:

    /**
    * @brief Wartość promienia koła 
     */
    double r;

    /**
    * @brief Konstuktor koła przyjmujący jedną wartość double 
    * @param r promień koła
    */
    Kolo(double r);

    double obwod() const override;
    double pole() const override;
    void wypisz(std::ostream& os) const override;

};

#endif