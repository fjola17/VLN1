#ifndef Salary_model_H
#define Salary_model_H

#include <string>
#include <iostream>
using namespace std;


class Salary_model
{
    public:
        Salary_model();
        Salary_model(string nm, int ssn, double sal, int mon, int yr);
        virtual ~Salary_model();

        friend ostream& operator << (ostream& out, Salary_model& sm);

        string name;
        int ssn;
        double salary;
        int month;
        int year;
};

#endif // Salary_model_H
