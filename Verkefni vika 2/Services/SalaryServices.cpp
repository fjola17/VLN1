#include "SalaryServices.h"

SalaryServices::SalaryServices()
{
    //ctor
}

SalaryServices::~SalaryServices()
{
    //dtor
}
void SalaryServices::CreateSalary(Employee employee){
    EmployeeRepo emp;
    emp.addNewEmployee(employee);
}

void SalaryServices::DisplaySalary(Employee employee){
    EmployeeRepo emp;
    emp.ReadAllEmployees(employee);
}
bool SalaryServices::validSalary(Salary& salary){
    if(salary.getsalary() < 0){
        cerr << "Salary is too low" << endl;
        return false;
    }
    else{
        return true;
    }
}

