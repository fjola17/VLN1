#include "adminmenucontroller.h"

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
    int user_input;

    clearConsole();
    displayHeader();
    displayAdminMenu();

    // Main
    cin >> user_input;
    clearCin();

    if(user_input == 1){
        // Display All
        displayToppings(ToppingModel::readToppings());
        displayItems(ItemModel::readItems());
        displayLocations(LocationModel::readLocations());
        displayPizzaMenu(PizzaModel::readPizzaMenu());
        system("pause");
        init();

    }else if(user_input == 2){
        // Register Pizza
        newPizza = userNewPizza();

        PizzaModel::writePizza(newPizza);
        init();
    }else if(user_input == 3){
        // Register Topping
        cin >> newTopping;

        ToppingModel::writeTopping(newTopping);
        init();
    }else if(user_input == 4){
        // Register Item
        cin >> newItem;

        ItemModel::writeItem(newItem);
        init();
    }else if(user_input == 5){
        // Register Location
        cin >> newLocation;

        LocationModel::writeLocation(newLocation);
        init();
    }else if(user_input == 6){
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
