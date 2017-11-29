#include "Model.h"

Model::Model()
{

}

Model::~Model()
{
    //dtor
}


void Model::registerNewPizza(){
    vw.throwAttention("I do nothing, replace me");
};

void Model::orderPizza(){
    vw.throwAttention("I do nothing, replace me");
}

void Model::displayAllPizza(){
    vw.throwAttention("I do nothing, replace me");
}

void Model::parseToView_MenuText(vector<string> dat){
    vw.displayMM(dat);
}

void Model::throwError_FromController(string e){
    vw.throwError(e);
}

void Model::throwAttention_FromController(string a){
    vw.throwAttention(a);
}
