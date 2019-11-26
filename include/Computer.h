#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

#include <Product.h>


class Computer : public Product
{
    using Product::Product;

    public:
        int ram;
        int screenSize;
        bool isLaptop;

        //Computer();  put en comment this constructor --> to use the constractor of Product
        virtual ~Computer();

        virtual void turnOnOff();

    protected:

    private:
        void update();
};

#endif // COMPUTER_H
