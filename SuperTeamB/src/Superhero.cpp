#include <iostream>
#include <fstream>

#include "Superhero.h"

using namespace std;

Superhero::Superhero()
{
    name[0] = '\0';
    age = 0;
    power = 'n';
}

Superhero::~Superhero()
{

}

ostream& operator << (ostream& out, Superhero& hero){


        out << "Name:  " << hero.name << endl;
        out << "Age:   " << hero.age << endl;
        out << "Power: ";

        if(hero.power == 'f'){
            out << "Flying" << endl;
        }
        else if(hero.power == 'g'){
            out << "Giant" << endl;
        }
        else if(hero.power == 'h'){
            out << "Hacker" << endl;
        }
        else if(hero.power == 'n'){
            out << "None" << endl;
        }
        else{
            out << "Weakling" << endl;
        }

        return out;
    }
istream& operator >> (istream& in, Superhero& hero){

        cout << "Enter Hero's name: ";
        in >> hero.name;
        cout << "Enter Hero's Age: ";
        in >> hero.age;
        cout << "Enter Hero's Power: ";
        in >> hero.power;

        return in;
    }

