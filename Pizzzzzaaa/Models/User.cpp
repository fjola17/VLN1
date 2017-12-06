#include "User.h"

User::User(string username, string password, char typeWork){
    this->username = username;
    this->password = password;
    this->typeWork = typeWork;
}

User::~User()
{
    //dtor
}
