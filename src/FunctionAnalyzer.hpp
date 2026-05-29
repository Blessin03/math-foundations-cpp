#pragma once


#include <vector>
using namespace std;


class FunctionAnalyzer
{
private:
    vector<int> domain;
    vector<char> codomain;
    vector<char> outputs;
public:
   
   void printRange();


   bool isInjective();
    bool isSurjective();
    bool isBijective();

};


