#ifndef SUPERHERO_H
#define SUPERHERO_H

#include <iostream>
#include <fstream>
using namespace std;


class Superhero
{
    public:
        Superhero();
        friend ostream& operator << (ostream& out, Superhero& hero);
        friend istream& operator >> (istream& in, Superhero& hero);

        virtual ~Superhero();

    protected:

    private:
        char name[38];
        int age;
        char power;
};

#endif // SUPERHERO_H
