// switch case execution analysis

#include <iostream>
using namespace std;

int main()
{
    int a = 1;

    switch (a)
    {
    case 1:
        cout << "one is executed.\n";

    case 2:
        cout << "two is executed.\n";
        break;

    case 3:
        cout << "three is executed.\n";
        break;

    default:
        cout << "Default is executed.\n";
        break;
    }

    return 0;
}