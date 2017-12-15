#ifndef INVALIDYEAR_H
#define INVALIDYEAR_H
#include <string>
using namespace std;

class InvalidYear
{
    public:
        InvalidYear(string str);
        virtual ~InvalidYear();
        string getmessage();

    protected:

    private:
        string str;
};

#endif // INVALIDYEAR_H
