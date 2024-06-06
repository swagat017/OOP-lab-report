#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "The number of arguements passed in main function are: " << argc << endl;

    for (int i = 0; i < argc; i++)
    {
        cout << "Arguement " << i + 1 << " = " << argv[i] << endl;
    }

    return 0;
}
