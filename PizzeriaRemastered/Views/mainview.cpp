#include "mainview.h"

#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

MainView::MainView()
{
    //ctor
}

MainView::~MainView()
{
    //dtor
}


void MainView::printMainMenu(vector<string> m){
    for(int i = 0; i < m.size();i++){
        cout << i << ". " << m[i] << endl;
    }
}

void MainView::printPizzaMenu(std::vector<Pizza> p){
    for(int a = 0; a < p.size();a++){
        cout << a << ". " << p[a].name << "\t" << p[a].price << "kr." endl << "Toppings: ";
        for(int b = 0; b < p[a].toppings.size();b++){
            cout << " - " << p[a].toppings[b].name;
        }
    }
}

void MainView::printToppingsChoice(std::vector<Topping> t){
    for(int i = 0; i < t.size();i++){
        cout << i << ". " << t[i].name << "\t" << t[i].price << "kr." << endl;
    }
}

void MainView::printPressAnyKey(){
    system("pause");
}

void MainView::consoleClear(){
    system("cls");
}

void MainView::printGenericMessage(string m){
    cout << m << endl;
}

void MainView::throwError(string e){
    cout << "Error\t: " << e << endl;
}

void MainView::throwWarning(string e){
    cout << "Warning\t: " << e << endl;
}

void MainView::throwAttention(string e){
    cout << "Attention\t: " << e << endl;
}
