#include "adminmenucontroller.h"

using namespace std;

AdminMenuController::AdminMenuController()
{
    AdminMenuController::init();
}

AdminMenuController::~AdminMenuController()
{
    //dtor
}

void AdminMenuController::init(){
    // Pre
    Topping newTopping;
    Item newItem;
    Pizza newPizza;
    Location newLocation;
    //Item newItem;
    int user_input;

    GlobalTools::clearConsole();
    GlobalTools::displayHeader();
    AdminView::displayAdminMenu();
    // Main
    cin >> user_input;
    GlobalTools::clearCin();

    if(user_input == 1){
        // Display All
        GlobalTools::clearConsole();
        GlobalTools::displayHeader();
        AdminMenuController::analytics();
        AdminView::displayToppings(ToppingModel::readToppings());
        AdminView::displayItems(ItemModel::readItems());
        AdminView::displayLocations(LocationModel::readLocations());
        AdminView::displayPizzaMenu(PizzaModel::readPizzaMenu());
        system("pause");
        AdminMenuController::init();

    }else if(user_input == 2){
        // Register Pizza
        newPizza = AdminMenuController::userNewPizza();

        PizzaModel::writePizza(newPizza);
        GlobalTools::attention("The Pizza has been written to PizzaMenu.dat");
        AdminMenuController::init();
    }else if(user_input == 3){
        // Register Topping
        cin >> newTopping;

        ToppingModel::writeTopping(newTopping);
        GlobalTools::attention("The topping has been written to Toppings.txt");

        AdminMenuController::init();
    }else if(user_input == 4){
        // Register Item
        cin >> newItem;

        ItemModel::writeItem(newItem);
        GlobalTools::attention("The Item has been written to Items.txt");
        AdminMenuController::init();
    }else if(user_input == 5){
        // Register Location
        cin >> newLocation;

        LocationModel::writeLocation(newLocation);
        AdminMenuController::init();
    }else if(user_input == 6){
        //Remove element from menu
        AdminMenuController::removefrommenu();
        AdminMenuController::init();
    }else if(user_input == 7){
        //Remove element from toppings
        AdminMenuController::removefromtoppings();
        AdminMenuController::init();
        }else if(user_input == 8){
        //Remove element from items
        AdminMenuController::removefromitem();
        AdminMenuController::init();
    }else if(user_input == 9){
        // Return To Main Menu
        MainMenuController MMC;
    }else{
        //ERROR state
        GlobalTools::optionWarning();
        AdminMenuController::init();
    }
}

Pizza AdminMenuController::userNewPizza(){
    Pizza newPizza;
    vector<Topping> selected_toppings;

    cout << "Input Pizza name (50):\t";
    cin.getline(newPizza.name, 50);
    cout << "Input Pizza price:\t";
    cin >> newPizza.price;
    selected_toppings = ToppingModel::selectTopping();
    for(int i = 0; i < selected_toppings.size();i++){
        newPizza.toppings[i] = selected_toppings[i];
        newPizza.sizeOfToppings++;
    }

    return newPizza;
}

void AdminMenuController::removefrommenu()
{
    vector<Pizza> menu = PizzaModel::readPizzaMenu();

    AdminView::displayPizzaMenu(menu);

    int user_input;
    cout << "Select element to remove from menu" << endl;
    cin >> user_input;

     if(user_input > 0 && user_input < (menu.size() + 1)){
        PizzaModel::cleanPizza();
        for(int i = 0; i < menu.size(); i++){
            if(i != user_input-1) {
                PizzaModel::writePizza(menu[i]);
            }
        }
        GlobalTools::attention("The Pizza has been removed from PizzaMenu.dat");
    }
}

void AdminMenuController::removefromtoppings()
{
    vector<Topping> toppings = ToppingModel::readToppings();

    AdminView::displayToppings(toppings);

    int user_input;
    cout << "Select element to remove from menu" << endl;
    cin >> user_input;

    if(user_input > 0 && user_input < (toppings.size() + 1)){
        ToppingModel::cleanTopping();
        for(int i = 0; i < toppings.size(); i++){
            if(i != user_input-1) {
                ToppingModel::writeTopping(toppings[i]);
            }
        }
        GlobalTools::attention("The Topping has been removed from Toppings.txt");
    }
}

void AdminMenuController::removefromitem()
{
    vector<Item> item = ItemModel::readItems();

    AdminView::displayItems(item);

    int user_input;
    cout << "Select element to remove from menu" << endl;
    cin >> user_input;

    if(user_input > 0 && user_input < (item.size() + 1)){
        ItemModel::cleanItem();
        for(int i = 0; i < item.size(); i++){
            if(i != user_input-1) {
                ItemModel::writeItem(item[i]);
            }
        }
        GlobalTools::attention("The Item has been removed from Items.txt");
    }
}



void AdminMenuController::analytics()
{
    vector<Order> allorders = OrderModel::readNonConditionalOrderMenu();
    int average;
    int sum = 0;
    int pizzasum = 0;
    for(int i = 0; i < allorders.size(); i++) {
        sum += allorders[i].price;
        for(int j = 0; j < allorders[i].sizeOfPizzas; j++) {
            pizzasum++;
        }
    }
    average = sum / allorders.size();
    cout << "\tPizza analytics!" << endl;
    cout << "The Total amount of orders: " << allorders.size() << endl;
    cout << "The Total amount of pizzas ordered: " << pizzasum << endl;
    cout << "The Total profit from orders: " << sum << endl;
    cout << "The average order price: " << average << endl << endl;

}
//
//void AdminMenuController::baseprice();
//{
//    cout << ""
//
//
//}
