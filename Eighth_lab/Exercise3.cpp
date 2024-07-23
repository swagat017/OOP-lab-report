#include <iostream>
#include <fstream>
using namespace std;

class Students
{
    string name, address, fac;

public:
    Students(string st, string ad, string fa) : name(st), address(ad), fac(fa) {}

    string getName() const
    {
        return name;
    }

    string getAddress() const
    {
        return address;
    }

    string getFaculty() const
    {
        return fac;
    }
};

int main()
{
    ofstream outfile("file.txt");
    if (!outfile)
    {
        cerr << "Error opening file for writing" << endl;
        return 1;
    }

    char ch = 'y';
    string n, a, f;

    do
    {
        cout << "Enter name then address then faculty:\n";
        cin >> n >> a >> f;

        Students temp(n, a, f);

        outfile << temp.getName() << " " << temp.getAddress() << " " << temp.getFaculty() << endl;
        cout << "More students? y/n " << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');

    outfile.close();

    ifstream infile("file.txt");
    if (!infile)
    {
        cerr << "Error opening file for reading" << endl;
        return 1;
    }

    while (infile >> n >> a >> f)
    {
        if (n == "Ram")
        {
            cout << "Name found:\n"
                 << "Here are the details:" << endl;

            cout << n << endl
                 << a << endl
                 << f << endl;
        }
    }

    infile.close();

    return 0;
}
