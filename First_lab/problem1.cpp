#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b;
    cout << "Enter any two numbers: ";
    cin >> a >> b;
    cout << "a = " << a << " \nb = " << b << endl;

    cout << "After swapping." << endl;

    swap(a, b);
    cout << "a = " << a << "\nb = " << b << endl;
}