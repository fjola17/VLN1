#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <fstream>
#include <vector>
#include "View.h"

class Model : private View
{
    public:
        Model();

        virtual ~Model();

        void parseToView_MenuText(vector<string> dat){
            vw.displayMM(dat);
        }

        void registerNewPizza(){
            //REPLACE ME
            vw.throwAttention("I do nothing, replace me");
        }

        void orderPizza(){
            //REPLACE ME
            vw.throwAttention("I do nothing, replace me");
        }

        void displayAllPizza(){
            //REPLACE ME
            vw.throwAttention("I do nothing, replace me");
        }

        void throwError_FromController(string e){
            vw.throwError(e);
        }

        void throwAttention_FromController(string a){
            vw.throwAttention(a);
        }

    protected:

    private:
        View vw;
};

#endif // MODEL_H
