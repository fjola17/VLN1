#include "Controller.h"

Controller::Controller()
{

}

Controller::Controller(int val)
{
    this->int_in = val;
    this->checkState();
}

Controller::~Controller()
{

}
