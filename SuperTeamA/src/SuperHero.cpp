#include "SuperHero.h"

SuperHero::SuperHero()
{
    this->name = "";
    this->age = 0;
    this->power = 'n';
}

SuperHero::~SuperHero()
{
    //dtor
}
SuperHero::SuperHero(string name, int age, char power){
    this->name = name;
    this->age = age;
    this->power = power;
}

istream& operator >> (istream& in, SuperHero& hero){
    //menu does only print on the screen, not in the file
    cout << "Please enter a name: ";
    in >> hero.name;
    cout << "Please enter age: ";
    in >> hero.age;
    cout << "Please enter a superpower" << endl;
    cout << "f for flying" << endl << "g for giant" << endl << "h for hacker" << endl << "n for none: ";
    in >> hero.power;
    return in;
}

ostream& operator << (ostream& out, SuperHero& hero){

    out << hero.name << " (" << hero.age << "): ";

    if (hero.power == 'f'){
        out << "flying" << endl;
    }

    else if (hero.power == 'g'){
        out << "giant" << endl;
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
