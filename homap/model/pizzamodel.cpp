#include "pizzamodel.h"

PizzaModel::PizzaModel()
{
    //ctor
}

PizzaModel::~PizzaModel()
{
    //dtor
}

//Creates a new pizza on the menu and writes it in a binary file
void PizzaModel::writePizza(Pizza piz){
    ofstream fout;
    fout.open("PizzaMenu.dat", ios::out | ios::binary | ios::app);
    if(fout.is_open()){
        fout.write((char*)(&piz), sizeof(Pizza));

        fout.close();
    }
    else{
        //Displays error
        GlobalTools::error("Could not open file PizzaMenu.dat");
    }
}

//Reads pizza menu from binary file
vector<Pizza> PizzaModel::readPizzaMenu(){
    vector<Pizza> to_return;

    ifstream fin;
    fin.open("PizzaMenu.dat", ios::in | ios::binary);

    if(fin.is_open()){
        fin.seekg(0, fin.end);
        int records = fin.tellg() / sizeof(Pizza);
        fin.seekg(0, fin.beg);

        Pizza *data = new Pizza[records];

        fin.read((char*)data, sizeof(Pizza) * records);

        for(int i = 0; i < records; i++){
            to_return.push_back(data[i]);
        }
        fin.close();
    }
    else{
        //Displays error
        GlobalTools::error("Could not open file PizzaMenu.dat");
    }
    return to_return;
}

//Select size on pizza.
int PizzaModel::selectInches(){
    int counter = 0;
    int user_input;

    //Selects input for size of the pizza.
    cout << "Choose your size:\t" << endl;

    cout << ++counter << ".\t 16 Inches" << endl;
    cout << ++counter << ".\t 12 Inches" << endl;
    cout << ++counter << ".\t 8 Inches" << endl;

    cin >> user_input;

    //Switch statement which checks what input is there and returns which size it is on the pizza
    switch(user_input){
        case 1 :
            return 16;
            break;
        case 2 :
            return 12;
            break;
        case 3 :
            return 8;
            break;
        default :
            GlobalTools::optionWarning();
            PizzaModel::selectInches();
            break;
    }
}

//Clears all pizzas out from menu
void PizzaModel::cleanPizza(){
    ofstream fout;
    fout.open("PizzaMenu.dat", ios::out | ios::trunc);
    fout.close();
}
