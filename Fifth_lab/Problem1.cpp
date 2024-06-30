#include <iostream>
using namespace std;

class complex
{
    const double real = 7;
    double img;

public:
    complex()
    {
        img = 9;
    }

    complex(double r, double i) : img(i)
    {
    }

    double getReal() const
    {
        return real;
    }

    double getImg()
    {
        return img;
    }

    void setComp(double re, double im)
    {
        re = getReal();
        im = img;
    }

    void display() const
    {
        cout << "The complex number is: \n";
        cout << real << " + " << img << "i" << endl;
    }
};

complex const display(complex &c)
{
    double real = c.getReal();
    double img = c.getImg();

    cout << "The complex number is: \n";
    cout << real << " + " << img << "i" << endl;
}

int main()
{
    complex c1;

    c1.display();

    cout << "Real part: " << c1.getReal() << endl;
    cout << "Imaginary part: " << c1.getImg() << endl;

    return 0;
}