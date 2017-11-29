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

}

void MainModel::processAttention(string e){

}

void MainModel::processWarning(string e){

}
