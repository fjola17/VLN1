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

void SalaryServices::validSalary(){
    Salary salary;
    try{
        cin >> salary;
        if(salary.getsalary() < 0){
            throw(InvalidSalary("Invalid salary! has to be more than 0!!"));
        }
        if(salary.getmonth() < 1 && salary.getmonth()> 12){
            throw(InvalidMonth("Incorrect month!"));
        }
        if(salary.getyear() < 1940){
            throw(InvalidYear("Incorrect year, computer didn't exist during that time!"));
        }
    }
    catch(InvalidSalary e){
        cout << e.getmessage() << endl;
    }
    catch(InvalidMonth m){
        cout << m.getmessage() << endl;
    }
    catch(InvalidYear y){
        cout << y.getmessage() << endl;
    }
}
