#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Base constructor A is called.\n";
    }
    ~A()
    {
        cout << "Base destructor A is called.\n";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Derived constructor B is called.\n";
    }
    ~B()
    {
        cout << "Derived destructor B is called.\n";
    }
};

int main()
{
    cout << "Creating object A:\n";
    A a;

    cout << "Creating object B:\n";
    B b;

    return 0;
}