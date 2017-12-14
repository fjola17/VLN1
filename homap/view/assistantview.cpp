#include "assistantview.h"

using namespace std;

void AssistantView::displayAssistantMenu(){
    int counter = 0;

    cout << "Welcome to Assistant Menu:\t" << endl;

    cout << ++counter << ".\tPush Order" << endl;
    cout << ++counter << ".\tDeliver Order" << endl;
    cout << ++counter << ".\tReturn to Main Menu" << endl;
    cout << "******" << endl;
}

void AssistantView::displayPushOrderMenu(Order ord){
    int counter = 0;

    cout << "Welcome to Push Order Menu:\t" << endl;
    AssistantView::displayCurrentOrder(ord);

    cout << ++counter << ".\tAdd Pizza to order" << endl;
    cout << ++counter << ".\tAdd Custom Pizza to order" << endl;
    cout << ++counter << ".\tAdd Items to order" << endl;
    cout << ++counter << ".\tFinalize order" << endl;
    cout << ++counter << ".\tExit order" << endl;
    cout << "Total number of Pizzas : " << ord.sizeOfPizzas << ", Items : " << ord.sizeOfItems << ". Neither may exceed 20" << endl;
    cout << "******" << endl;

}
void AssistantView::displayCurrentOrder(Order ord){
    int counter = 0;
    cout << "Name:\t" << ord.name << "\tPhone:\t" << ord.phoneNumber << endl;
    cout << "Pick up from Pizzeria Address:\t" << ord.address.address << endl;
    for(int i = 0;i < ord.sizeOfPizzas;i++){
        cout << "Pizza #" << ++counter << ":\t" << endl;
        cout << ord.pizzas[i].name << "\t" << ord.pizzas[i].inches << " inches\t" << ord.pizzas[i].price << "\tToppings: ";
        for(int a = 0;a < ord.pizzas[i].sizeOfToppings;a++){
            cout << ord.pizzas[i].toppings[a].name << " ";
        }
        cout << endl;
        cout << "Items :\t" << endl;
        for(int a = 0;a < ord.sizeOfItems;a++){
            cout << "\t-" << ord.items[a].name << "\t" << ord.items[a].price << endl;
        }
    }
    cout << "******" << endl;
}

void AssistantView::displayDeliverOrderMenu(vector<Order> ordVector){
    int counter = 0;

    cout << "Welcome to Deliver Order Menu:\t" << endl;
    cout << "Here Orders will appear as they are marked ready by the Bakers ..." << endl << endl;

    if(ordVector.size() != 0){
        for(int i = 0; i < ordVector.size();i++){
                cout << "Order #" << ++counter << ":\t\nName :\t" << ordVector[i].name << "\tPhone Number :\t" << ordVector[i].phoneNumber << endl;
                cout << "Number of Pizzas to Deliver :\t" << ordVector[i].sizeOfPizzas << "\tPrice to Pay :\t" << ordVector[i].price << endl;
                cout << "Items :\t" << endl;
                for(int a = 0;a < ordVector[i].sizeOfItems;a++){
                    cout << "\t-" << ordVector[i].items[a].name << endl;
                }
                cout << "******" << endl;
        }
    }else{
        cout << endl << "It would seem as if there are no Ready Orders yet!" << endl;
    }
}

void AssistantView::displayPizzaMenu(vector<Pizza> pizVector){
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

void AssistantView::displayItemMenu(vector<Item> iteVector){
    int counter = 0;

    cout << "Item Menu:\t" << endl;

    for(int i = 0; i < iteVector.size();i++){
        cout << ++counter << ".\tName: " << iteVector[i].name << "\tPrice: " << iteVector[i].price << endl;
    }
    cout << "******" << endl;
}
