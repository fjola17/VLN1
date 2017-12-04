#ifndef PIZZAREPO_H
#define PIZZAREPO_H

#include "Pizza.h"
#include <fstream>

class PizzaRepo
{
    public:
        PizzaRepo();
        virtual ~PizzaRepo();
        void writeNewPizza();

    protected:

    private:
};

#endif // PIZZAREPO_H
