#include <iostream>
#define PI 3.1414
using namespace std;

inline int calcArea(int l = 10)
{
    return 6 * l * l;
}

void calcArea(float l, float b)
{
    cout << "The area of given rectangle is: " << l * b;
}

void calcArea(float r)
{
    cout << "The area of given circle is: " << PI * r * r;
}

int main()
{
    int cubeLen, choice;
    float l, b, r;
    double area;
    char ch;

    cout << "Which solid's area do you and calculate among given solids?\n";
    cout << "1. Cube" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "Enter the number: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Do you want to enter the length of cube? y/n: ";
        cin >> ch;
        if (ch == 'y' || ch == 'Y')
        {
            cout << "Enter the length of the cube: ";
            cin >> cubeLen;

            area = calcArea(cubeLen);
            cout << "The area of cube is: " << area << endl;
        }
        else
        {
            area = calcArea();
            cout << "The area of cube is: " << area << endl;
        }
    }
    else if (choice == 2)
    {
        cout << "Enter the length and then the breadth: ";
        cin >> l >> b;
        calcArea(l, b);
    }
    else if (choice == 3)
    {
        cout << "Enter the radius of the circle: ";
        cin >> r;
        calcArea(r);
    }
    else
    {
        cout << "Your entered number isnot valid." << endl;
    }

    return 0;
}