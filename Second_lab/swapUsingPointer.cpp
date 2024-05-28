#include<iostream>

void swap(int *m , int *n)
{
    int temp = *m;
    *m = *n;
    *n = temp;
}

int getNum()
{
    int a;
    std::cout << "Enter any number: ";
    std::cin >> a;
    return a;
}

int main()
{
    int num1, num2;
    num1 = getNum();
    num2 = getNum();

    std::cout << "Before swapping: \n";
    std::cout << num1 << ", " << num2 << std::endl;

    swap(&num1, &num2);

    std::cout << "After swapping: \n";
    std::cout << num1 << ", " << num2 << std::endl;

    return 0;
}