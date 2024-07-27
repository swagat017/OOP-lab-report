#include<iostream>
using namespace std;

class Matrix
{
    int mat[2][2];

public:
    Matrix()
    {
        mat[0][0] = 0;
        mat[0][1] = 0;
        mat[1][0] = 0;
        mat[1][1] = 0;
    }

    Matrix(int a,  int b, int c, int d)
    {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

};