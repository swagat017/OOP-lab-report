#include <iostream>
#define pi 3.14
using namespace std;

int calcArea(int l = 10)
{
    return 6 * l * l;
}

inline void calcArea(float r)
{
    float area = pi * r * r;
    cout << "The area is: " << area << endl;
}

void calcArea(float l, float b)
{
    float area = l * b;
    cout << "The area is: " << area << endl;
}

int main()
{
    int cubeLength;
    float rad, len, bre;

    cout << "Enter the length of the cube: ";
    cin >> cubeLength;
    cout << "The area of cube is: " << calcArea(cubeLength) << endl;

    cout << "Enter tha radius of the circle: ";
    cin >> rad;
    calcArea(rad);

    cout << "Enter the length and breadth of the rectangle: " << endl;
    cin >> len >> bre;
    calcArea(len, bre);

    return 0;
}