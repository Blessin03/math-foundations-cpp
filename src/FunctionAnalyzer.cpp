#include "FunctionAnalyzer.hpp"
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void FunctionAnalyzer::printRange(){
    vector<char> range;


    for(auto& output : outputs){
        if(find(range.begin(), range.end(), output) == range.end()){
            range.push_back(output);
        }
    }

    for(auto& idx : range){
        cout << idx << "  \n\n";
    }
}


bool FunctionAnalyzer::isInjective(){
   set<char> seen;

   for (auto& output : outputs){
    if(seen.find(output) != seen.end()) return false;

    seen.insert(output);
   
    }
    return true;
}

bool FunctionAnalyzer::isSurjective(){
  int cnt = 0;
        for(auto& idx : codomain){
            if(find(outputs.begin(), outputs.end(), idx) != outputs.end()) 
                cnt++;
            }
       return cnt == codomain.size();
}

bool FunctionAnalyzer::isBijective(){
    return isInjective() && isSurjective();
}