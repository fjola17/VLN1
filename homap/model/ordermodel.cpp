#include "ordermodel.h"

OrderModel::OrderModel()
{
    //ctor
}

OrderModel::~OrderModel()
{
    //dtor
}

void OrderModel::writeOrder(Order ord){
    ofstream fout;
    fout.open("OrderList.dat", ios::out | ios::binary | ios::app);
    if(fout.is_open()){
        fout.write((char*)(&ord), sizeof(Order));

        fout.close();
    }
    else{
        error("Could not open file OrderList.dat");
    }
}

void OrderModel::cleanOrder(){
    ofstream fout;
    fout.open("OrderList.dat", ios::out | ios::trunc);
    fout.close();
}

vector<Order> OrderModel::readNonConditionalOrderMenu(){
    vector<Order> to_return;

    ifstream fin;
    fin.open("OrderList.dat", ios::in | ios::binary);

    if(fin.is_open()){
        fin.seekg(0, fin.end);
        int records = fin.tellg() / sizeof(Order);
        fin.seekg(0, fin.beg);

        Order *data = new Order[records];

        fin.read((char*)data, sizeof(Order) * records);

        for(int i = 0; i < records; i++){
            to_return.push_back(data[i]);
        }
        fin.close();
    }
    else{
        error("Could not open file OrderList.dat");
    }
    return to_return;
}

vector<Order> OrderModel::readOrderMenu(Location loc){
    vector<Order> to_return;

    ifstream fin;
    fin.open("OrderList.dat", ios::in | ios::binary);

    if(fin.is_open()){
        fin.seekg(0, fin.end);
        int records = fin.tellg() / sizeof(Order);
        fin.seekg(0, fin.beg);

        Order *data = new Order[records];

        fin.read((char*)data, sizeof(Order) * records);

        for(int i = 0; i < records; i++){
            // state 1 === READY (Only the baker can change the state to 1)
            if((string)data[i].address.address == (string)loc.address && data[i].state == 1){
                to_return.push_back(data[i]);
            }
        }
        fin.close();
    }
    else{
        error("Could not open file OrderList.dat");
    }
    return to_return;
}

vector<Order> OrderModel::readOrderMenuBaker(Location loc){
    vector<Order> to_return;
    ifstream fin;

    fin.open("OrderList.dat", ios::in | ios::binary);

    if(fin.is_open()){
        fin.seekg(0, fin.end);
        int records = fin.tellg() / sizeof(Order);
        fin.seekg(0, fin.beg);

        Order *data = new Order[records];

        fin.read((char*)data, sizeof(Order) * records);

        for(int i = 0; i < records; i++){
            // state 0 === Needs to Cook
            if((string)data[i].address.address == (string)loc.address && data[i].state == 0){
                to_return.push_back(data[i]);
            }
        }
        fin.close();
    }
    else{
        error("Could not open file OrderList.dat");
    }
    return to_return;
}
