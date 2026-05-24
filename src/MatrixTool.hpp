#pragma once

#include<vector>
using namespace std;
class MatrixTool
{
private:
vector<vector<double>> matrix;
public:
    MatrixTool(/* args */);
    ~MatrixTool();


    void printMatrix(vector<vector<double>>& matrix);


    bool sameSize(vector<vector<double>>& matrixA, vector<vector<double>>& matrixB);
};

