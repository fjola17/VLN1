#ifndef INVALIDSSN_H
#define INVALIDSSN_H

#include <string>
using namespace std;

class InvalidSSN
{
    public:
        InvalidSSN(string message);
        string send_message();

    private:
        string message;
};

#endif // INVALIDSSN_H
