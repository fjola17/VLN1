#include "toppingmodel.h"

#include <string.h>
#include <stdlib.h>

ToppingModel::ToppingModel()
{
    //ctor
}

ToppingModel::~ToppingModel()
{
    //dtor
}

//Writes topping into a file
void ToppingModel::writeTopping(Topping top){
    ofstream fout;
    fout.open("Toppings.txt", ios::app);

    if(fout.is_open()){
        fout << top.name << endl << top.price << endl;
        fout.close();

    }
    else{
        GlobalTools::error("Could not open file Toppings.txt");
    }
}

//Reads topping from file
vector<Topping> ToppingModel::readToppings(){
    string line;
    char name[20];
    int price;
    vector<Topping> to_return;

    ifstream fin;
    fin.open("Toppings.txt");

    if(fin.is_open()){
        while(getline(fin, line)){
            strcpy(name, line.c_str());
            if(name != ""){
            getline(fin, line);
            price = atoi(line.c_str());

                to_return.push_back(Topping(name, price));
            }
        }
        fin.close();
    }
    else{
        GlobalTools::error("Could not open file Toppings.txt");
    }
    return to_return;
}

//Selects topping from file
vector<Topping> ToppingModel::selectTopping(){
    vector<Topping> topVector = ToppingModel::readToppings();
    vector<Topping> to_return;

    unsigned int user_input;
    bool exit = false;

    while(exit != true){
        GlobalTools::clearConsole();
        AdminView::displayToppings(topVector);

        cout << "HINT:\tInput 0 or outside the options to finalize\nMaximum:\t20\nYou have added:\t" << to_return.size() << endl;
        cin >> user_input;

        GlobalTools::clearCin();

        //if input is larger than 0 and smaller than toppings available
        //Size is less than 20.
        if(user_input > 0 && user_input < (topVector.size() + 1) && to_return.size() <= 20){
            to_return.push_back(topVector[user_input - 1]);
        }
        if((user_input < 1 || user_input > (topVector.size() + 1)) || to_return.size() == 20){
            exit = true;
            return to_return;
        }
    }
    return topVector;
}

//Clears toppings from file
void ToppingModel::cleanTopping(){
    ofstream fout;
    fout.open("Toppings.txt", ios::out | ios::trunc);
    fout.close();
}
