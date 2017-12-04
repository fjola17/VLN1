#ifndef SALARYUI_H
#define SALARYUI_H

#include <iostream>
#include <cstdlib>

#include "SalaryServices.h"
#include "Employee.h"

using namespace std;
class SalaryUI
{
    public:
        SalaryUI();
        virtual ~SalaryUI();
        void SalaryMenu();
        void getoptions();

    protected:

    private:
};

#endif // SALARYUI_H
