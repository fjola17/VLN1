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

    /*
    This is where everything is formatted from data into user-friendly messages
    */

    void displayMM(vector<string> data);

    void throwError(string e);

    void throwAttention(string e);

    protected:

    private:
};

#endif // VIEW_H
