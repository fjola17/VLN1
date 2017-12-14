#include "adminview.h"

void AdminView::displayAdminMenu(){
    int counter = 0;

    cout << "Welcome to Admin Menu:\t" << endl;

    cout << ++counter << ".\tTo display All (Pizza, Topping, Item, Location)" << endl;
    cout << ++counter << ".\tTo register new Pizza" << endl;
    cout << ++counter << ".\tTo register new Topping" << endl;
    cout << ++counter << ".\tTo register new Item" << endl;
    cout << ++counter << ".\tTo register new Location" << endl;
    cout << ++counter << ".\tTo return to Main Menu" << endl;
}

void AdminView::displayToppings(vector<Topping> topVector){
    int counter = 0;

    cout << "Toppings Menu:\t" << endl;

    for(int i = 0; i < topVector.size();i++){
        cout << ++counter << ".\t" << topVector[i].name << "\t" << topVector[i].price << endl;
    }
    cout << "******" << endl;
}

void AdminView::displayItems(vector<Item> iteVector){
    int counter = 0;

    cout << "Item Menu:\t" << endl;

    for(int i = 0; i < iteVector.size();i++){
        cout << ++counter << ".\t" << iteVector[i].name << "\t" << iteVector[i].price << endl;
    }
    cout << "******" << endl;
}

void AdminView::displayLocations(vector<Location> locVector){
    int counter = 0;

    cout << "Locations Menu:\t" << endl;

    for(int i = 0; i < locVector.size();i++){
        cout << ++counter << ".\t" << locVector[i].address << endl;
    }
    cout << "******" << endl;
}

void AdminView::displayPizzaMenu(vector<Pizza> pizVector){
    int counter = 0;

    cout << "Pizza Menu:\t" << endl;

    for(int i = 0; i < pizVector.size();i++){
        cout << ++counter << ".\tName: " << pizVector[i].name << "\tPrice: " << pizVector[i].price << endl;
        cout << "\tToppings:\t" << endl;
        for(int a = 0;a < pizVector[i].sizeOfToppings;a++){
            cout << "\t\t-" << pizVector[i].toppings[a].name << endl;
        }
    }
    cout << "******" << endl;
}
