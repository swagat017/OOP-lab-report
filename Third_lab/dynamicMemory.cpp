
#include <iostream>
using namespace std;

int *roll = new int;
char *name = new char;

void scanRollandName()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your roll number: ";
    cin >> *roll;
}

void freeMemory()
{
    delete roll;
    delete[] name;
}

void printRollandName()
{
    cout << "Name : " << name << endl;
    cout << "Roll no : " << *roll << endl;
}

int main()
{
    scanRollandName();

    cout << "\nMemory allocated dynamically for name and roll.\n" << endl;
    cout << "Value of Name and roll before deallocation." << endl;
    printRollandName();

    freeMemory();
    
    cout << "\nAfter deallocation.\n";
    printRollandName();

    return 0;
}