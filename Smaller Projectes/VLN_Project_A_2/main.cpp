#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    bool exit = false;
    string usr_str;


    fout.open("textFileA2w.txt", ios::app);
    cout << "Input a string to add\nAdd back-slash in the start to stop (\\)" << endl;
    do{
        cin >> usr_str;
        if(fout.is_open() && usr_str[0] != '\\'){
            fout << usr_str << endl;
        }else{
            exit = true;
        }
    }while(!exit);
    fout.close();
    return 0;
}
