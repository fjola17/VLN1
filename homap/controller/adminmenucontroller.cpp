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
        AdminMenuController::init();
    }else if(user_input == 3){
        // Register Topping
        cin >> newTopping;

        ToppingModel::writeTopping(newTopping);
        AdminMenuController::init();
    }else if(user_input == 4){
        // Register Item
        cin >> newItem;

        ItemModel::writeItem(newItem);
        AdminMenuController::init();
    }else if(user_input == 5){
        // Register Location
        cin >> newLocation;

        LocationModel::writeLocation(newLocation);
        AdminMenuController::init();
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
