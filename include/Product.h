#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include "Brand.h"

class Product
{
    public:
        int id;
        float price;
        int sizeunit;
        std::string model;

        Brand* brand;

        Product(Brand* _brand);
        virtual ~Product();

        virtual void turnOnOff() = 0;
        // "= 0" --> function abstract, permet lasser function vide
        // "virtuel" -->  lasser class fils to remplir ce function

    protected:

    private:
};

#endif // PRODUCT_H
