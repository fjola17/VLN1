#ifndef TOPPINGS_H
#define TOPPINGS_H


class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        Toppings(string name, int price);

    protected:

    private:
        string name;
        int price;
};

#endif // TOPPINGS_H
