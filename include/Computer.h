#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

#include <Product.h>


class Computer : public Product
{
    public:
        int ram;
        int screenSize;
        bool isLaptop;

        Computer();
        virtual ~Computer();

        virtual void turnOnOff();

    protected:

    private:
        void update();
};

#endif // COMPUTER_H
