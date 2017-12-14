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

//baker menu, shows what to do
void BakerMenuController::init(){
    // Pre
    int user_input;

    GlobalTools::clearConsole();
    GlobalTools::displayHeader();
    BakerView::displayBakerMenu();
    // Main
    cin >> user_input;
    GlobalTools::clearCin();

    if(user_input == 1){
        // Process Order
        BakerMenuController::processOrder();
        BakerMenuController::init();
    }
    else if(user_input == 2){
        // Return to Main Menu
        MainMenuController MMC;
    }
    else{
        GlobalTools::optionWarning();
        BakerMenuController::init();
    }
}
//Processes order from baker
void BakerMenuController::processOrder(){
    vector<Order> orders = OrderModel::readOrderMenuBaker(BakerMenuController::currentLocation);
    int user_input;

    BakerView::displayOrders(orders);

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


        GlobalTools::attention("The selected Order has been processed");
    }
}
