#include <iostream>
#define PI 3.142
int main(void)
{              
    int deg;   
    float rad; 
    std::cout <<"Enter the value in degree : ";
    std::cin >> deg;
    rad = PI * deg / 180;                       
    std::cout <<"The angle in radian : "<< rad; 
    return 0;                                   
}
