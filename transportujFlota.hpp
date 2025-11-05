#pragma once

#include "Stocznia.hpp"


unsigned int transportujFlota(unsigned int towar)
{
    unsigned int sumaTowaru = 0;
    unsigned int liczbaZaglowcow = 0;

    Stocznia stocznia{};

    while (sumaTowaru < towar)
    {
    
    Statek* s1 = stocznia();

    unsigned int przewiez = s1->transportuj();
    sumaTowaru += przewiez;

    if (dynamic_cast<Zaglowiec*>(s1))
        liczbaZaglowcow++;

    delete s1;
    }

    return  liczbaZaglowcow;
}
