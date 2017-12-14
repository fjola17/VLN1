#ifndef TOPPING_H
#define TOPPING_H

/*

    General

*/
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stdlib.h>

using namespace std;

class Topping
{
    public:
        Topping();
        Topping(char nm[20], int pr);
        virtual ~Topping();

        friend istream& operator >> (istream& in, Topping& top);

        char name[20];
        int price;
};

#endif // TOPPING_H
