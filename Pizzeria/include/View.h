#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <vector>
using namespace std;

class View
{
    public:
        View();

        virtual ~View();

    void displayMM(vector<string> data){
        for(int i = 0; i < data.size(); i++){
            cout << i << ". " << data[i] << endl;
        }
    }

    void throwError(string e){
        cout << "ERROR: " << e << endl;
    }

    void throwAttention(string e){
        cout << "ATTENTION: " << e << endl;
    }

    protected:

    private:
};

#endif // VIEW_H
