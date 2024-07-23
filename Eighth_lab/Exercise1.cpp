#include <iostream>
#include <cstring>
using namespace std;

class Polygon
{
protected:
    double length, breadth;

public:
    Polygon()
    {
        length = breadth = 0;
    }

    Polygon(double l, double b) : length(l), breadth(b) {}

    void set(double l, double b)
    {
        length = l;
        breadth = b;
    }

    virtual double area()
    {
        return 0;
    }
};

class Rectangle : public Polygon
{
public:
    double area()
    {
        return length * breadth;
    }
};

class Triangle : public Polygon
{
public:
    double area()
    {
        return (length * breadth) / 2;
    }
};

int main()
{
    Rectangle R;
    Triangle T;
    Polygon P;

    Polygon *ptr = &P;
    ptr->set(2, 4);
    cout << "The area of polygon is: " << ptr->area() << endl;

    ptr = &R;
    ptr->set(3, 8);
    cout << "The area of rectangle is: " << ptr->area() << endl;

    ptr = &T;
    ptr->set(10, 7);
    cout << "The area of triangle is: " << ptr->area() << endl;

    return 0;
}