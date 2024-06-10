#include <iostream>
#include <cstring>

using namespace std;

class Person
{
    char name[30];
    int age;
    double height;

public:
    Person()
    {
        strcpy(name, "Unknown");
        age = 0;
        height = 0.0;
    }

    Person(const char *name, int age, double height)
    {
        strcpy(this->name, name);
        this->age = age;
        this->height = height;
    }

    string profession;

    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter profession: ";
        cin >> profession;
    }

    void display()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nHeight: " << height;
        cout << "\nprofession: " << profession;
    }

    double getHeight()
    {
        return height;
    }

    void setHeight(double h)
    {
        height = h;
    }
};

int main(void)
{
    Person p1;
    cout << "Default constructor values:\n";
    p1.display();

    Person p2("Amrita", 20, 5.5);
    cout << "\n\nParameterized constructor values:\n";
    p2.display();

    cout << "\n\nEnter details for another person:\n";
    Person p3;
    p3.getdata();
    p3.display();

    cout << "\n\nAccessing public member directly:\n";
    cout << "profession: " << p3.profession << endl;

    cout << "Original height: " << p3.getHeight() << endl;
    p3.setHeight(6.1);
    cout << "Updated height: " << p3.getHeight() << endl;

    return 0;
}
