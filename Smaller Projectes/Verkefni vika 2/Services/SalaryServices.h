#ifndef SALARYSERVICES_H
#define SALARYSERVICES_H

#include "EmployeeRepo.h"
#include "Employee.h"
#include "Salary.h"
#include "SalaryRepo.h"

#include "InvalidSalary.h"
#include "InvalidMonth.h"
#include "InvalidYear.h"
#include "InvalidName.h"
#include "InvalidSSN.h"

class SalaryServices
{
    public:
        SalaryServices();
        virtual ~SalaryServices();
        void CreateSalary(Salary salary);
        void DisplaySalary(Salary salary);
        void validSalary();

    protected:

    private:
};

#endif // SALARYSERVICES_H
