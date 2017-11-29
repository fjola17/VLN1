#ifndef TOPPINGS_H
#define TOPPINGS_H


class Toppings
{
    public:
        Toppings();
        virtual ~Toppings();
        friend istream& operator >> (istream& in, Toppings& topping);
        friend ostream& operator << (ostream& out, Toppings& topping);


    protected:

    private:
        char name[20];
        double prize;

};

#endif // TOPPINGS_H
