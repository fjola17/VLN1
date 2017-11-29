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

        int getsize(){
            return this->size;
        }
        double getprize(){
            return this->prize;
        }

    protected:

    private:
        int size;
        double prize;
        string name;
        vector<Toppings> topArr;
};

#endif // PIZZA_H
