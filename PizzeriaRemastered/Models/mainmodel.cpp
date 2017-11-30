#include "mainmodel.h"

using namespace std;

MainModel::MainModel()
{
    //ctor
}

MainModel::~MainModel()
{
    //dtor
}

void MainModel::processMainMenu(){
    MainView::printMainMenu(MainModel::mainMenuText);
}

void MainModel::processError(string e){
    cout << "Error 404 process " << e << " is not working!" << endl;
}

void MainModel::processAttention(string e){
    cout << "Attention! process" << e << " should most likely do something other than this" << endl;
}

void MainModel::processWarning(string e){
    cout << "Warning! process " << e << " is not going as planned " << endl;
}
