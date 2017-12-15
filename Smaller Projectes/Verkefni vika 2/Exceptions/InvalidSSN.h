#ifndef INVALIDSSN_H
#define INVALIDSSN_H

#include <string>
using namespace std;

class InvalidSSN
{
    public:
        InvalidSSN(string message);
        virtual ~InvalidSSN();
        string sendMessage();

    protected:

    private:
        string message;
};

#endif // INVALIDSSN_H
