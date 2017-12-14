#include "itemmodel.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "string.h"
#include <string.h>
#include <cstdlib>

ItemModel::ItemModel()
{
    //ctor
}

ItemModel::~ItemModel()
{
    //dtor
}

void ItemModel::writeItem(Item ite){
    ofstream fout;
    fout.open("Items.txt", ios::app);
    if(fout.is_open()){
        fout << ite.name << endl << ite.price << endl;
        fout.close();
    }
    else{
        GlobalTools::error("Could not open file Items.txt");
    }
}

vector<Item> ItemModel::readItems(){
    string line;
    char name[50];
    int price;
    vector<Item> to_return;

    ifstream fin;
    fin.open("Items.txt");
    if(fin.is_open()){
        while(getline(fin, line)){
            strcpy(name, line.c_str());
            if(name != '\0'){
            getline(fin, line);
            price = atoi(line.c_str());
                to_return.push_back(Item(name, price));
            }
        }
        fin.close();
    }
    else{
        GlobalTools::error("Could not open file Items.txt");
    }
    return to_return;
}

vector<Item> ItemModel::selectItem(){
    vector<Item> iteVector = ItemModel::readItems();
    vector<Item> to_return;
    int user_input;
    bool exit = false;

    while(exit != true){
        GlobalTools::clearConsole();
        AdminView::displayItems(iteVector);

        cout << "HINT:\tInput 0 or outside the options to finalize\nMaximum:\t20\nYou have added:\t" << to_return.size() << endl;
        cin >> user_input;

        GlobalTools::clearCin();

        if(user_input > 0 && user_input < (iteVector.size() + 1) && to_return.size() <= 20){
            to_return.push_back(iteVector[user_input - 1]);
        }
        if((user_input < 1 || user_input > (iteVector.size() + 1)) || to_return.size() == 20){
            exit = true;
            return to_return;
        }
    }
}

void ItemModel::cleanItem(){
    ofstream fout;
    fout.open("Items.txt", ios::out | ios::trunc);
    fout.close();
}
