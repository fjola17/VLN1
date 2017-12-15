#ifndef INVALIDSALARY_H
#define INVALIDSALARY_H

#include <string>
using namespace std;


class InvalidSalary
{
    public:
        InvalidSalary(string message);
        string getmessage();

    protected:

    private:
        string message;
};

#endif // INVALIDSALARY_H
