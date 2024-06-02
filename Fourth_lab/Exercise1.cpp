#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char name[30];
    int age;

public:
    Person()
    {
        strcpy(name, "Unknown");
        age = 0;
    }

    Person(const char *name, int age)
    {
        strcpy(this->name, name);
        this->age = age;
    }

    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() const
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

int main()
{
    Person p1;
    cout << "Default constructor values:\n";
    p1.display();

    Person p2("Amrita", 20);
    cout << "\n\nParameterized constructor values:\n";
    p2.display();

    cout << "\n\nEnter details for another person:\n";
    Person p3;
    p3.getdata();
    p3.display();

    return 0;
}
