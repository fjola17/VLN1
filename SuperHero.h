#ifndef SUPERHERO_H
#define SUPERHERO_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;


class SuperHero
{
    public:
        SuperHero();
        SuperHero(string name,int age, char power);
        string set_name(string nam);
        int set_age(int ag);
        char set_super_power(char powah);
        friend ostream& operator << (ostream& out, SuperHero& hero);
        friend istream& operator >> (istream& in, SuperHero& hero);

        virtual ~SuperHero();

    private:
        string name;
        int age;
        char power;
};

#endif // SUPERHERO_H
