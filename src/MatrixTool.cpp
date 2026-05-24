#include "MatrixTool.hpp"
#include <iostream>
using namespace std;


void   MatrixTool::printMatrix(vector<vector<double>>& matrix){


    if (matrix.empty()){
        cerr << "Matrix is empty  \n";
        return;
    }

    for(auto& idx : matrix){
        for(auto& num : idx){
            cout << num;
        }
          cout << "\n";
    }
  
        
    
    
}


bool MatrixTool::sameSize(vector<vector<double>>& matrixA, vector<vector<double>>& matrixB){

    if (matrixA.empty() || matrixB.empty()){
        cerr << "One of the matrices is empty  \n";
        return false;
    }

    if (matrixA.size() != matrixB.size()){
        return false;
    }

    



        for (int row = 0; row < matrixA.size(); row++) {
        if (matrixA[row].size() != matrixB[row].size()) {
            return false;
        }


        return true;
}