#ifndef INVALIDYEAR_H
#define INVALIDYEAR_H
#include <string>
using namespace std;


class InvalidYear
{
    public:
        InvalidYear(string message);
        string send_message();

    private:
        string message;
};

#endif // INVALIDYEAR_H
