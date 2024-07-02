#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int r)
    {
        roll = r;
    }

    void displayRoll()
    {
        cout << "Roll no : " << roll << endl;
    }
};

class Test : public Student
{
protected:
    float marks1, marks2;

public:
    void setMarks(float x, float y)
    {
        marks1 = x;
        marks2 = y;
    }

    void displayMarks()
    {
        cout << "Marks in subject1 : " << marks1 << endl;
        cout << "Marks in subject2 : " << marks2 << endl;
    }
};

class Result : public Test
{
    char grade;
    float total, percentage;

public:
    void display()
    {
        displayRoll();
        displayMarks();
        total = marks1 + marks2;
        percentage = total / 2;

        if (percentage >= 80)
        {
            grade = 'A';
        }
        else if (percentage >= 60)
        {
            grade = 'B';
        }
        else if (percentage >= 40)
        {
            grade = 'C';
        }
        else if (percentage >= 32)
        {
            grade = 'D';
        }
        else
        {
            grade = 'N';
        }

        cout << "Total marks : " << total << endl;
        cout << "Percentage : " << percentage << endl;
        cout << "Grade : " << grade << endl;
    }
};

int main()
{
    Result R1;
    R1.setRoll(17);
    R1.setMarks(85.25, 89.50);
    R1.display();

    return 0;
}