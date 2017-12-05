#ifndef INVALIDMONTH_H
#define INVALIDMONTH_H

#include <string>
using namespace std;

class InvalidMonth
{
    public:
        InvalidMonth(string message);
        virtual ~InvalidMonth();

    protected:

    private:
        string message;
};

#endif // INVALIDMONTH_H
