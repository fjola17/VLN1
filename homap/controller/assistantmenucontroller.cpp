#include "assistantmenucontroller.h"

using namespace std;

AssistantMenuController::AssistantMenuController()
{
    this->currentLocation = LocationModel::selectLocation();
    this->init();
}

AssistantMenuController::~AssistantMenuController()
{
    //dtor
}

void AssistantMenuController::init(){
    // Pre
    int user_input;

    GlobalTools::clearConsole();
    GlobalTools::displayHeader();
    AssistantView::displayAssistantMenu();
    // Main
    cin >> user_input;

    GlobalTools::clearCin();

    if(user_input == 1){
        // Push Order
        AssistantMenuController::pushOrder();
        AssistantMenuController::init();
    }else if(user_input == 2){
        // Deliver Pending Order
        AssistantMenuController::deliverOrder();
        AssistantMenuController::init();
    }else if(user_input == 3){
        // Return to Main Menu
        MainMenuController MMC;
    }else{
        GlobalTools::optionWarning();
        AssistantMenuController::init();
    }
}

void AssistantMenuController::pushOrder(){
    Order newOrder;
    int user_input;
    bool exit = false;

    cout << "Personal Information:\t" << endl;
    cout << "Name (50):\t";
    cin.getline(newOrder.name, 50);
    cout << "Phone Number (10):\t";
    cin.getline(newOrder.phoneNumber, 10);
    newOrder.address = AssistantMenuController::currentLocation;
    cout << endl;

    while(exit != true){
        GlobalTools::clearConsole();
        AssistantView::displayPushOrderMenu(newOrder);


        cin >> user_input;
        GlobalTools::clearCin();

        if(user_input == 1){
            // Select From Menu
            if(newOrder.sizeOfPizzas != 20){
                vector<Pizza> selection = PizzaModel::readPizzaMenu();

                GlobalTools::clearConsole();
                AssistantView::displayPizzaMenu(selection);

                cin >> user_input;
                GlobalTools::clearCin();

                newOrder.pizzas[newOrder.sizeOfPizzas] = selection[user_input - 1];
                newOrder.pizzas[newOrder.sizeOfPizzas].inches = PizzaModel::selectInches();
                newOrder.sizeOfPizzas++;
            }else{
                GlobalTools::warning("You have already reached the limit for maximum Pizzas");
            }

        }else if(user_input == 2){
            // Make Custom
            Pizza newPizza;
            vector<Topping> selected_toppings;

            GlobalTools::clearConsole();

            cout << "Creating custom pizza ..." << endl;

            cout << "Give your Pizza a Name (50):\t";
            cin.getline(newPizza.name, 50);

            newPizza.price = 1000;

            cout << "Name :\t" << newPizza.name << "\t" << "Base price :\t" << newPizza.price << endl;

            cout << "You will now be taken through appropriate steps ..." << endl;

            newPizza.inches = PizzaModel::selectInches();

            selected_toppings = ToppingModel::selectTopping();
            for(unsigned int i = 0; i < selected_toppings.size();i++){
                newPizza.toppings[i] = selected_toppings[i];
                newPizza.price += selected_toppings[i].price;
                newPizza.sizeOfToppings++;
            }

            newOrder.pizzas[newOrder.sizeOfPizzas] = newPizza;
            newOrder.sizeOfPizzas++;
        }if(user_input == 3){
            // Select Item from Menu
            if(newOrder.sizeOfItems != 20){
                vector<Item> selection = ItemModel::readItems();

                GlobalTools::clearConsole();
                AssistantView::displayItemMenu(selection);

                cin >> user_input;
                GlobalTools::clearCin();

                newOrder.items[newOrder.sizeOfItems] = selection[user_input - 1];
                newOrder.sizeOfItems++;
            }else{
                GlobalTools::warning("You have already reached the limit for maximum Items");
            }
        }else if(user_input == 4){
            // Finalize Order
            GlobalTools::clearConsole();
            cout << "This is the final order ..." << endl;
            AssistantView::displayCurrentOrder(newOrder);
            //calculate total price
            for(int i = 0; i < newOrder.sizeOfPizzas;i++){
                newOrder.price += newOrder.pizzas[i].price;
            }
            for(int i = 0; i < newOrder.sizeOfItems;i++){
                newOrder.price += newOrder.items[i].price;
            }
            cout << "Total Price is :\t" << newOrder.price << endl;

            cout << "You may confirm your order now (1. Yes,  (Any). Return to Selection) :\t" << endl;

            cin >> user_input;
            GlobalTools::clearCin();

            if(user_input == 1){
                // 0 === In Process
                newOrder.state = 0;

                OrderModel::writeOrder(newOrder);
                GlobalTools::attention("The Order has been written to OrderList.dat");
                exit = true;
            }else{
                // Null the price
                newOrder.price = 0;
            }

        }else if(user_input == 5){
            // Return to Assistant Menu
            exit = true;
        }else{
            //Do nothing
        }
    }
}

void AssistantMenuController::deliverOrder(){
    vector<Order> orders = OrderModel::readOrderMenu(AssistantMenuController::currentLocation);
    int user_input;

    AssistantView::displayDeliverOrderMenu(orders);

    cout << "Choose an order to deliver :\t" << endl;
    cin >> user_input;

    if(user_input > 0 && user_input < (orders.size() + 1)){
        vector<Order> over_write = OrderModel::readNonConditionalOrderMenu();

        OrderModel::cleanOrder();
        for(int i = 0; i < over_write.size(); i++){
           if((string)over_write[i].name == (string)orders[user_input - 1].name && over_write[i].state == orders[user_input - 1].state && (string)over_write[i].phoneNumber == (string)orders[user_input - 1].phoneNumber && over_write[i].sizeOfPizzas == orders[user_input - 1].sizeOfPizzas){
                //Taken care of
                over_write[i].state = 2;
           }
           OrderModel::writeOrder(over_write[i]);
        }

        GlobalTools::attention("The selected Delivery has been cleared");
    }
}
