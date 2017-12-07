#ifndef INVALIDNAME_H
#define INVALIDNAME_H

#include <string>
using namespace std;

class InvalidName
{
    public:
        InvalidName(string message);
        string getmessage();

    private:
        string message;
};

#endif // INVALIDNAME_H
