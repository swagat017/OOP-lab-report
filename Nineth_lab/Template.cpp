#include <iostream>
#include <cmath>
using namespace std;

template <class T>
T root(T a)
{
    try
    {
        if (a < 0)
        {
            throw(0);
        }
        return sqrt(a);
    }
    catch (int a)
    {
        throw;
    }
}

int main()
{
    try
    {
        int a;
        float b;

        cout << "Enter a integer type number: ";
        cin >> a;
        cout <<"The square root of "<< a <<" is " << root<int>(a) << endl;

        cout << "Enter a float type number: ";
        cin >> b;
        cout <<"The square root of "<< b <<" is " << root<float>(b) << endl;
    }
    catch (int a)
    {
        if (a == 0)
        {
            cout << "ERROR!!" << endl
                 << "The number is smaller than 0.";
        }
    }
    return 0;
}