
#include "CalculusTool.hpp"
#include <cmath>
#include<iostream>

using namespace std;

CalculusTool::CalculusTool() {}

CalculusTool::~CalculusTool() {}

    double CalculusTool::evaluateFunction(int functionChoice, double x){

        switch(functionChoice){
            case 1:
            return x*x;
            break;

            case 2:
            return x*x*x;
            break;

            case 3:
            return (2*x)+1;
            break;

            case 4:
            return sin(x);
            break;
            
            case 5:
            return cos(x);
            break;

            default:
            cerr <<"invalid choice \n";
            return 0;
        }
    }
