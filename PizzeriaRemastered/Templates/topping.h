#ifndef TOPPING_H
#define TOPPING_H

#include <string>

/*

    This is a Topping template
    No need to change for now

*/

class Topping
{
    public:
        Topping();
        virtual ~Topping();

    protected:

    private:
        std::string name;
        int price;
};

#endif // TOPPING_H
