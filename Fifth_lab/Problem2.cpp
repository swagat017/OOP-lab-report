#include <iostream>
using namespace std;

class complex
{
    const double real;
    double img;

public:
    complex(double r, double i) : real(r), img(i)
    {
    }

    double getReal() const
    {
        return real;
    }

    double getImg() const
    {
        return img;
    }

    void display() const;
};

void complex::display() const
{
    cout<<"The complex number is: \n";
    cout << real << " + " << img << "i" << endl;
}

int main()
{
    const complex c1(2, 3);

    c1.display();

    cout << "Real part: " << c1.getReal() << endl;
    cout << "Imaginary part: " << c1.getImg() << endl;

    return 0;
}