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

//Get user input
void AdminMenuController::init(){
    // Pre
    Topping newTopping;
    Item newItem;
    Pizza newPizza;
    Location newLocation;

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

    }
    else if(user_input == 2){
        // Register Pizza
        newPizza = AdminMenuController::userNewPizza();

        //bilað
        PizzaModel::writePizza(newPizza);
        GlobalTools::attention("The Pizza has been written to PizzaMenu.dat");
        AdminMenuController::init();
    }
    else if(user_input == 3){
        // Register Topping
        cin >> newTopping;

        ToppingModel::writeTopping(newTopping);
        GlobalTools::attention("The topping has been written to Toppings.txt");

        AdminMenuController::init();
    }
    else if(user_input == 4){
        // Register Item
        cin >> newItem;

        ItemModel::writeItem(newItem);
        GlobalTools::attention("The Item has been written to Items.txt");
        AdminMenuController::init();
    }
    else if(user_input == 5){
        // Register Location
        cin >> newLocation;

        LocationModel::writeLocation(newLocation);
        AdminMenuController::init();
    }
    else if(user_input == 6){
        // Remove from Menu menu
        AdminMenuController::removefromMenu();
        AdminMenuController::init();
    }
    else if(user_input == 7){
        // Return To Main Menu
        MainMenuController MMC;
    }
    else{
        //ERROR state
        GlobalTools::optionWarning();
        AdminMenuController::init();
    }
}

//Create a new pizza
Pizza AdminMenuController::userNewPizza(){
    Pizza newPizza;
    vector<Topping> selected_toppings;

    cout << "Input Pizza name (50):\t";
    cin.getline(newPizza.name, 50);
    cout << "Input Pizza price:\t";
    cin >> newPizza.price;

    selected_toppings = ToppingModel::selectTopping();
    for(unsigned int i = 0; i < selected_toppings.size();i++){
        newPizza.toppings[i] = selected_toppings[i];
        newPizza.sizeOfToppings++;
    }

    return newPizza;
}

//Select which menu you want to remove from.
void AdminMenuController::removefromMenu()
{
    GlobalTools::clearConsole();
    GlobalTools::displayHeader();
    AdminView::displayRemoveMenu();
    int user_input;

    cin >> user_input;
    GlobalTools::clearCin();

     if(user_input == 1){
            //Remove from Pizza Menu
        AdminMenuController::removefrommenu();
        AdminMenuController::init();
    }
    else if(user_input == 2){
            //Remove from Toppings menu
        AdminMenuController::removefromtoppings();
        AdminMenuController::init();
    }
    else if(user_input == 3){
            //Remove from Items
        AdminMenuController::removefromitem();
        AdminMenuController::init();
    }
    else if(user_input == 4){
            //Exit to Admin Controller
        AdminMenuController::init();
    }
    else{
        //ERROR state
        GlobalTools::optionWarning();
        AdminMenuController::init();
    }

}

//Remove pizza from menu
void AdminMenuController::removefrommenu()
{
    vector<Pizza> menu = PizzaModel::readPizzaMenu();

    GlobalTools::clearConsole();

    AdminView::displayPizzaMenu(menu);

    unsigned int user_input;

    //Selecting which pizzs from menu should be removed.
    cout << "Select element to remove from menu" << endl;
    cout << endl << "HINT : Input 0 or anything out side of scope to return to previous menu" << endl;

    cin >> user_input;

    //Checks which pizza from menu should be removed and removes it.
     if(user_input > 0 && user_input < (menu.size() + 1)){
        PizzaModel::cleanPizza();
        for(unsigned int i = 0; i < menu.size(); i++){
            if(i != user_input-1) {
                PizzaModel::writePizza(menu[i]);
            }
        }
        GlobalTools::attention("The Pizza has been removed from PizzaMenu.dat");
    }
}

//Remove topping from menu.
void AdminMenuController::removefromtoppings()
{
    vector<Topping> toppings = ToppingModel::readToppings();

    GlobalTools::clearConsole();

    AdminView::displayToppings(toppings);

    unsigned int user_input;

    //Input which topping should be removed
    cout << "Select element to remove from menu" << endl;
    cout << endl << "HINT : Input 0 or anything out side of scope to return to previous menu" << endl;
    cin >> user_input;

    //Checks which topping should be removed and removes it.
    if(user_input > 0 && user_input < (toppings.size() + 1)){
        ToppingModel::cleanTopping();
        for(unsigned int i = 0; i < toppings.size(); i++){
            if(i != user_input-1) {
                ToppingModel::writeTopping(toppings[i]);
            }
        }
        GlobalTools::attention("The Topping has been removed from Toppings.txt");
    }
}


//Remove item from menu
void AdminMenuController::removefromitem()
{
    vector<Item> item = ItemModel::readItems();
    GlobalTools::clearConsole();
    AdminView::displayItems(item);

    unsigned int user_input;

    //Input which item should be removed from menu
    cout << "Select element to remove from menu" << endl;
    cout << endl << "HINT : Input 0 or anything out side of scope to return to previous menu" << endl;
    cin >> user_input;

    if(user_input > 0 && user_input < (item.size() + 1)){
        ItemModel::cleanItem();

        //Checks which item should be removed and removes it.
        for(unsigned int i = 0; i < item.size(); i++){
            if(i != user_input - 1) {
                ItemModel::writeItem(item[i]);
            }
        }
        GlobalTools::attention("The Item has been removed from Items.txt");
    }
}


//Analytics of orders
void AdminMenuController::analytics()
{
    vector<Order> allorders = OrderModel::readNonConditionalOrderMenu();

    int average;
    int sum = 0;
    int pizzasum = 0;

    for(unsigned int i = 0; i < allorders.size(); i++) {
        sum += allorders[i].price;
        for(int j = 0; j < allorders[i].sizeOfPizzas; j++) {
            pizzasum++;
        }
    }
    average = sum / allorders.size();

    //Displays number of order, total pizzas, total price of all orders and average of each order
    cout << "\tPizza analytics!" << endl;
    cout << "The Total amount of orders: " << allorders.size() << endl;
    cout << "The Total amount of pizzas ordered: " << pizzasum << endl;
    cout << "The Total profit from orders: " << sum << endl;
    cout << "The average order price: " << average << endl << endl;

}

void AdminMenuController::baseprice()
{
    ofstream fout;
    fout.open("Baseprice.txt");
    fout.close();

    cout << "";

}
