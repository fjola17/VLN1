#include "bakermenucontroller.h"

BakerMenuController::BakerMenuController()
{
    this->currentLocation = LocationModel::selectLocation();
    this->init();
}

BakerMenuController::~BakerMenuController()
{
    //dtor
}

void BakerMenuController::init(){
    // Pre
    int user_input;

    clearConsole();
    displayHeader();
    displayBakerMenu();
    // Main
    cin >> user_input;
    clearCin();

    if(user_input == 1){
        // Process Order
        processOrder();
        init();
    }else if(user_input == 2){
        // Return to Main Menu
        MainMenuController MMC;
    }else{
        optionWarning();
        init();
    }
}

void BakerMenuController::processOrder(){
    vector<Order> orders = OrderModel::readOrderMenuBaker(BakerMenuController::currentLocation);
    int user_input;

    displayOrders(orders);

    cout << "Choose an order to process :\t" << endl;
    cin >> user_input;

    if(user_input > 0 && user_input < (orders.size() + 1)){
        vector<Order> over_write = OrderModel::readNonConditionalOrderMenu();

        OrderModel::cleanOrder();
        for(int i = 0; i < over_write.size(); i++){
           if(over_write[i].state == orders[user_input - 1].state && (string)over_write[i].phoneNumber == (string)orders[user_input - 1].phoneNumber && over_write[i].sizeOfPizzas == orders[user_input - 1].sizeOfPizzas){
                //Taken care of
                over_write[i].state = 1;
           }

           OrderModel::writeOrder(over_write[i]);
        }


        attention("The selected Order has been processed");
    }
}
