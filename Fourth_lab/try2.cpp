// switch case execution 2 analysis

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter 1,2,3 or 4: ";
    cin >> a;
    switch (a)
    {
    case 1:
    case 2:
        cout << "Case 1,2 is executed.\n";
        break;

    case 3:
    case 4:
        cout << "Case 3,4 is executed.\n";
        break;

    default:
        cout << "Default is executed.\n";
        break;
    }
    return 0;
}