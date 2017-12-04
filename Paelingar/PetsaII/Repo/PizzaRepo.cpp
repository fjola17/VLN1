#include "PizzaRepo.h"

PizzaRepo::PizzaRepo()
{
    //ctor
}

PizzaRepo::~PizzaRepo()
{
    //dtor
}
void writeNewPizza(Pizza pizza){
    ofstream fout;

    fout.open("Pizza_Menu_file.txt", ios::app);

//    fout << pizza << size;

    fout.close();
}
