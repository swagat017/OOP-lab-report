#include <iostream>
#include <cstring>
using namespace std;

class Course
{
protected:
    string name;
    float creditHours;

public:
    Course(const string name, float creditHours)
    {
        this->name = name;
        this->creditHours = creditHours;
    }

    virtual void display()
    {
        cout << "Name of course : " << name << endl;
        cout << "Credit Hours : " << creditHours << endl;
    }
};

class Mathematics : public Course
{
public:
    Mathematics(const string name, float creditHours) : Course(name, creditHours) {}

    void display() override
    {
        cout << "Mathematics course name : " << name << endl;
        cout << "Credit Hours : " << creditHours << endl;
    }
};

class Engineering : public Course
{
public:
    Engineering(const string name, float creditHours) : Course(name, creditHours) {}

    void display() override
    {
        cout << "Engineering course name : " << name << endl;
        cout << "Credit Hours : " << creditHours << endl;
    }
};

class Science : public Course
{
public:
    Science(const string name, float creditHours) : Course(name, creditHours) {}

    void display() override
    {
        cout << "Science course name : " << name << endl;
        cout << "Credit Hours : " << creditHours << endl;
    }
};

class Physics : public Science
{
public:
    Physics(const string name, float creditHours) : Science(name, creditHours) {}

    void display() override
    {
        cout << "Physics course name : " << name << endl;
        cout << "Credit Hours : " << creditHours << endl;
    }
};

class Chemistry : public Science
{
public:
    Chemistry(const string name, float creditHours) : Science(name, creditHours) {}

    void display() override
    {
        cout << "Chemistry course name : " << name << endl;
        cout << "Credit Hours : " << creditHours << endl;
    }
};

int main()
{
    Course c1("BCT", 32);
    c1.display();

    Course c2("BCA", 30);
    c2.display();

    Mathematics m1("Matrix", 12);
    m1.display();

    Mathematics m2("Fourier Series", 14);
    m2.display();

    Engineering e1("Computer Engineering", 132);
    e1.display();

    Science s1("Biology", 22);
    s1.display();

    Physics p1("Mechanics", 27);
    p1.display();

    Chemistry ch1("Organic Chemistry", 17);
    ch1.display();

    return 0;
}