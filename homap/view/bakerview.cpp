#include "bakerview.h"

void BakerView::displayBakerMenu(){
    int counter = 0;

    cout << "Welcome to baker Menu:\t" << endl;

    cout << ++counter << ".\tProcess Order" << endl;
    cout << ++counter << ".\tReturn to Main Menu" << endl;
    cout << "******" << endl;
}

void BakerView::displayOrders(vector<Order> ordVector){
    int counter = 0;

    cout << "Welcome to Baker Order Menu:\t" << endl;
    cout << "Here you can mark Orders as Ready, once they come in from Assistants ..." << endl << endl;

    if(ordVector.size() != 0){
        for(int i = 0; i < ordVector.size();i++){
                cout << "Order #" << ++counter << ":\t\nName :\t" << ordVector[i].name << endl;

                for(int a = 0;a < ordVector[i].sizeOfPizzas;a++){
                    cout << "Item #" << a + 1 << ":\t" << endl;
                    cout << ordVector[i].pizzas[a].name << "\t" << ordVector[i].pizzas[a].inches << " inches" << "\tToppings: ";
                    for(int b = 0;b < ordVector[i].pizzas[a].sizeOfToppings;b++){
                        cout << ordVector[i].pizzas[a].toppings[b].name << " ";
                    }
                    cout << endl;
                }
                cout << "******" << endl;
        }
    }else{
        cout << "It would seem as if there are no Orders yet!" << endl;
    }
    cout << endl << "HINT : Input 0 or anything out side of scope to return to previous menu" << endl;
}
