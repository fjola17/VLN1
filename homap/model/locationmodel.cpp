#include "locationmodel.h"

using namespace std;

LocationModel::LocationModel()
{
    //ctor
}

LocationModel::~LocationModel()
{
    //dtor
}

//Writes location into a file
void LocationModel::writeLocation(Location loc){
    ofstream fout;
    fout.open("Locations.txt", ios::app);
    if(fout.is_open()){
        fout << loc.address << endl;
        fout.close();

        GlobalTools::attention("The topping has been written to Locations.txt");
    }
    else{
        GlobalTools::error("Could not open file Locations.txt");
    }
}

//Reads all locations from file
vector<Location> LocationModel::readLocations(){
    char address[50];
    vector<Location> to_return;

    ifstream fin;
    fin.open("Locations.txt");

    if(fin.is_open()){
        while(!fin.eof()){
            fin.getline(address, 50);
            if((string)address != ""){
                to_return.push_back(Location(address));
            }
        }
        fin.close();
    }
    else{
        GlobalTools::error("Could not open file Toppings.txt");
    }
    return to_return;
}

//Selects location from file
Location LocationModel::selectLocation(){
    vector<Location> locVector;
    unsigned int user_input;

    locVector = LocationModel::readLocations();

    AdminView::displayLocations(locVector);

    cin >> user_input;

    GlobalTools::clearCin();

    //if input larger than 0 and smaller than locations then it returns the location, otherwise throws error
    if(user_input > 0 && user_input < (locVector.size() + 1)){
        return locVector[user_input - 1];
    }
    else{
        GlobalTools::optionWarning();
        LocationModel::selectLocation();
    }
    return locVector[user_input - 1];
}
