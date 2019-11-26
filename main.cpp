#include <iostream>

#include "Computer.h"

using namespace std;

void displayProduct(Product& _product) //passer la reference
// passer par pointer:   possible de changer l'adress dans le function
// passer par reference: impossible de changer l'adress.
{

    cout << _product.model << " @ "<< _product.brand->Getname() << endl;
}

int main()
{
    Brand smallSoft;
    smallSoft.Setname("smallSoft");
    Computer myComputer(&smallSoft);


    myComputer.price = 30;
    myComputer.model = "Pouet";
    myComputer.turnOnOff();
    displayProduct(myComputer);


    //cout << "Hello world!" << endl;
    return 0;
}
