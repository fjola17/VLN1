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
        friend ostream& operator << (ostream& out, SuperHero& hero);
        friend istream& operator >> (istream& in, SuperHero& hero);
        ~SuperHero();

    private:
        string name;
        int age;
        char power;
        ifstream fin;
        ofstream fout;

};

#endif // SUPERHERO_H
