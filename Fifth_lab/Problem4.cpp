#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imag;
    static int count;

public:
    Complex(double r, double i) : real(r), imag(i)
    {
        count++;
    }

    static void displayTotalObjects()
    {
        cout << "Total number of Complex objects created: " << count << std::endl;
    }
};

int Complex::count = 0;

int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3(0, -1);

    Complex::displayTotalObjects();

    return 0;
}
