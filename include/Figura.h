#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include <iomanip>


class Figura{

public:

/**
 * @brief Funkcja wirtualna do obliczania obwodu figury
 * @return double 
 */
virtual double obwod() const = 0;

/**
 * @brief Funkcja wirtualna do obliczania pola figury 
 * @return double 
 */
virtual double pole() const = 0;

/**
 * @brief Funkcja wirutalna do wypisywanie informacji o danej figurze 
 * @param os strumień wyjścia
 */
virtual void wypisz(std::ostream& os) const = 0;

/**
 * @brief Przeciążenie operatora << do wypisywania klas figur 
 * @param os strumien wyjściowy
 * @param object figura, o której informacje mają zostać wypisane
 * @return std::ostream& obiekt, który ma zostać wypisany
 */
friend std::ostream& operator<<(std::ostream& os, const Figura& object);

};

#endif