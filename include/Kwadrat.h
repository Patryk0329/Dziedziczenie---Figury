#ifndef KWADRAT_H
#define KWADRAT_H

#include "Prostokat.h"

//Kwadrat analizujemy jako specjalny przypadek prostokąta, o dwóch równych bokach
class Kwadrat: public Prostokat{

    public:
    /**
     * @brief Konstruktor Kwadrat przyjmujący jedną wartość double  
     * @param a bok kwadratu
     */
    Kwadrat(double a);

    void wypisz(std::ostream& os) const override;

};

#endif