/* Write a program to illustrate the use of namespace in C++. Define two different
   namespace names BEI and BCT, define some common and different attributes and try to
   access it in your program. */

#include <iostream>

namespace BCT
{
    char name[50] = "Computer Engineering";
    char roll[20] = "THA079BCT048";
    int room = 302;

    void printName()
    {
        std::cout << name << std::endl;
    }

    void printRoll()
    {
        std::cout << roll << std::endl;
    }

    void printRoom()
    {
        std::cout << room << std::endl;
    }
}

namespace BEI
{
    char name[50] = "Electronics Engineering";
    char roll[20] = "THA079BEI018";
    int labRoom = 209;

    void printName()
    {
        std::cout << name << std::endl;
    }

    void printRoll()
    {
        std::cout << roll << std::endl;
    }

    void printLabRoom()
    {
        std::cout << labRoom << std::endl;
    }
}

int main ()
{
    using namespace BCT;
    using namespace BEI;

    BCT::printName();
    BCT::printRoll();
    printRoom();
    printLabRoom();

    return 0;

}