#include "SalaryServices.h"

SalaryServices::SalaryServices()
{
    //ctor
}

SalaryServices::~SalaryServices()
{
    //dtor
}
void SalaryServices::CreateSalary(Salary salary){
    SalaryServices sl;
    sl.validSalary();
    SalaryRepo sr;
    sr.getSalary();

}

void SalaryServices::DisplaySalary(Salary salary){

}

void SalaryServices::validSalary(){
    Salary salary;
    try{
        cin >> salary;
        if(salary.getsalary() < 0){
            throw(InvalidSalary("Invalid salary! has to be more than 0!!"));
        }
        else if(salary.getmonth() < 1 && salary.getmonth()> 12){
            throw(InvalidMonth("Incorrect month!"));
        }
        else if(salary.getyear() != 2017){
            throw(InvalidYear("Incorrect year, computer didn't exist during that time!"));
        }
      /*
        for(int i = 0; i < name.length(); i++){
            if(name[i] != isletter()){
                throw InvalidName("Invalid name, name only includes letters");
            }
        }
        for (int i = 0; i < 10; i++){
            if(ssn[i] != isdigit()){
                throw InvalidSSN("Not a valid social security number! Social security numbers only include didgits");
            }
            else if(ssn != 10){
                throw InvalidSSN("Not a valid social security number, not right lenght");
            }

        }
*/
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
    /*   catch (InvalidName n){
        cout << n << endl;
    }
    catch(invalidSSN l){
        cout << l << endl;
    }
    */
}
