#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str;
    ifstream fin;
    char input = 0;
    fin.open("Datafile.txt");

    do{
    for(int i = 0; i < 10; i++){
       if(fin.eof()== false){
        getline(fin, str);
        cout << str << endl;
        }
        else
            break;
    }
    cout << endl;

    if(fin.eof()== true){
        break;
    }



    do{
        cout << "Do you wish to continue (y/n)?";
        cin >> input;

        if(input != 'n' && input != 'y'){
            cout << "Invalid input!" << endl;
        }
        else{
            break;
        }

    }while(1);

    cout << endl;

    }while(input != 'n');

    fin.close();
    return 0;
}
