#include "EmployeeServices.h"

EmployeeServices::EmployeeServices()
{
    //ctor
}

EmployeeServices::~EmployeeServices()
{
    //dtor
}

void EmployeeServices::LookForEmployeeSSN(Employee employee){
    employee.get_SocialNumber();

}
void EmployeeServices::displayEmployees(){
}
void validEmployee(){
    //try{
        Employee employee;
        string name, ssn;
        cin >> name;
        ///bilað, þarf að laga til að fá út villurnar
        /*
        for(int i = 0; i < name.length(); i++){
            if(name[i] != isletter()){
                throw InvalidName("Invalid name, name only includes letters");
            }
        }
        cin >> ssn;
        for (int i = 0; i < 10; i++){
            if(ssn[i] != isdigit()){
                throw InvalidSSN("Not a valid social security number! Social security numbers only include didgits");
            }
            else if(ssn != 10){
                throw InvalidSSN("Not a valid social security number, not right lenght");
            }
        ]

    }
    catch (InvalidName n){
        cout << n << endl;
    }
    catch(invalidSSN l){
        cout << l << endl;
    }
    */
}
