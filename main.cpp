#include <iostream>
#include "swap.cpp"

int main()
{
    int a = 0;
    int b = 1;
    Swap(&a,&b);
    std::cout << "a: " << a << " b: " << b << std::endl;
    return 0;
}