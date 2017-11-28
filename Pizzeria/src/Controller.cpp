#include "Controller.h"

Controller::Controller()
{

}

Controller::Controller(int val)
{
    this->int_in = val;
    this->checkState();
}

void Controller::checkState();

bool Controller::getExit(){
    return this->exit;
}

Controller::~Controller()
{

}
