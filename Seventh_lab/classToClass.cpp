#include <iostream>
using namespace std;

class Design2;
class Design1
{
    int code, qty;
    double price;

public:
    Design1()
    {
        code = 0;
        qty = 0;
        price = 0.00;
    }

    Design1(int x, int y, double z) : code(x), qty(y), price(z) {}

    int getCode()
    {
        return code;
    }

    int getQty()
    {
        return qty;
    }

    double getPrice()
    {
        return price;
    }

    void display()
    {
        cout << "Code : " << code << endl;
        cout << "Quantity : " << qty << endl;
        cout << "Price : " << price << endl;
    }

    friend class Design2;
};

class Design2
{
    int code;
    double value;

public:
    Design2(Design1 &d1)
    {
        code = d1.getCode();
        value = d1.getQty() * d1.getPrice();
    }

    void display()
    {
        cout << "Code : " << code << endl;
        cout << "Value : " << value << endl;
    }
};

int main()
{
    Design1 d1(7, 17, 10);
    cout << "Design1 : \n";
    d1.display();

    Design2 d2 = d1;
    cout << endl
         << "Design2 : \n";
    d2.display();

    return 0;
}