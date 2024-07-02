#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "A is created.\n";
    }
    ~A()
    {
        cout << "A is destroyed.\n";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "B is created.\n";
    }
    ~B()
    {
        cout << "B is destroyed.\n";
    }
};

int main()
{
    cout << "Before creating object A:\n";
    A a;

    cout << "Before creating object B:\n";
    B b;

    return 0;
}