#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    Time() : hr(12), min(0), sec(0)
    {
    }

    Time(int seconds)
    {
        hr = seconds / 3600;
        seconds %= 3600;
        min = seconds / 60;
        sec = seconds % 60;
    }

    Time (const Time &t4):hr(t4.hr), min(t4.min), sec(t4.sec)
    {
    }

    void display () const
    {
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec "<<endl;
    }
};
int main ()
{
    Time t1;
    cout<<"Default constructor: ";
    t1.display();

    double seconds;
    cout << "Enter the time in seconds: ";
    cin >> seconds;

    Time t2(seconds);
    cout<<"Parameterized constructor: ";
    t2.display();

    Time t3(t2);
    // Time t3;
    // t3= t2;
    cout<<"Copy constructor: ";
    t3.display();

    return 0;
}