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

void LocationModel::writeLocation(Location loc){
    ofstream fout;
    fout.open("Locations.txt", ios::app);
    if(fout.is_open()){
        fout << loc.address << endl;
        fout.close();

        attention("The topping has been written to Locations.txt");
    }
    else{
        error("Could not open file Locations.txt");
    }
}

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

Location LocationModel::selectLocation(){
    vector<Location> locVector;
    int user_input;

    locVector = readLocations();

    displayLocations(locVector);

    cin >> user_input;

    clearCin();

    if(user_input > 0 && user_input < (locVector.size() + 1)){
        return locVector[user_input - 1];
    }else{
        optionWarning();
        selectLocation();
    }
}
