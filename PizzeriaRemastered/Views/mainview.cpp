#include "mainview.h"

#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

MainView::MainView()
{
    //ctor
}

MainView::~MainView()
{
    //dtor
}


void MainView::printMainMenu(vector<string> m){
    for(int i = 0; i < m.size();i++){
        cout << i << ". " << m[i] << endl;
    }
}

void MainView::printPressAnyKey(){
    system("pause");
}

void MainView::consoleClear(){
    system("cls");
}

void MainView::printGenericMessage(string m){
    cout << m << endl;
}

void MainView::throwError(string e){
    cout << "Error\t: " << e << endl;
}

void MainView::throwWarning(string e){
    cout << "Warning\t: " << e << endl;
}

void MainView::throwAttention(string e){
    cout << "Attention\t: " << e << endl;
}
