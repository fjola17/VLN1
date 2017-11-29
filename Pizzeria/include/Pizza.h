#ifndef PIZZA_H
#define PIZZA_H

#include "Toppings.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Pizza
{
    public:
        Pizza();
        virtual ~Pizza();
<<<<<<< HEAD

        int getsize(){
            return this->size;
        }
        double getprize(){
            return this->prize;
        }
=======
        int getsize();
        double getprize();
        //need to put something about overloading operators here???
        friend istream& operator >> (istream& in, Pizza& pizza);
        friend ostream& operator << (ostream& out, Pizza& pizza);

>>>>>>> b6e4f0dcfec7a8441a136c5dfc001bf159f272e6

    protected:

    private:
        int size;
        double prize;
        string name;
<<<<<<< HEAD
        vector<Toppings> topArr;
=======
        Toppings* topping;
>>>>>>> b6e4f0dcfec7a8441a136c5dfc001bf159f272e6
};

#endif // PIZZA_H
