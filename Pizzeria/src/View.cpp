#include "View.h"

View::View()
{
    //ctor
}

View::~View()
{
    //dtor
}

void View::displayMM(vector<string> data){
    for(int i = 0; i < data.size(); i++){
        cout << i << ". " << data[i] << endl;
    }
}

void View::throwError(string e){
    cout << "ERROR: " << e << endl;
}

void View::throwAttention(string e){
    cout << "ATTENTION: " << e << endl;
}
