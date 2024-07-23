#include <iostream>
using namespace std;

class Complex
{
    int real, img;

public:
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &,const Complex &);
};

istream& operator>>(istream &in, Complex& C)
{
    cout << "Enter the real part and then imaginary part of a complex number: \n";
    in >> C.real >> C.img;
    return in;
}

ostream& operator << (ostream& out ,const Complex & C)
{
    out << C.real << " + " << C.img << "i" << endl;
    return out;
}

int main()
{
    Complex C1;
    cin >> C1;
    cout << C1;

    return 0;
}