#include<iostream>
#include<cmath>
using namespace std;

class complex
{
    double real, img ;
public:
    complex(double r, double i):real(r), img(i)
    {
    }

    friend double magni(const complex &c1);
};

double magni(const complex &c1)
{
    return sqrt(c1.real *c1.real + c1.img*c1.img);
}

int main ()
{
    complex c1(3, 4);

    cout<<"Magnitude of the given complex number: "<<magni(c1)<<endl;

    return 0;
}