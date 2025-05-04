#include <iostream>
#include <string>
#include "atoi.cpp"

int main()
{
    std::cout << Atoi("12345") << std::endl;
    std::cout << Atoi("0000000012345") << std::endl;
    std::cout << Atoi("012 345") << std::endl;
    std::cout << Atoi("Hello World!") << std::endl;
    std::cout << Atoi("+1234") << std::endl;
    std::cout << Atoi("-1234") << std::endl;
    std::cout << Atoi("++1234") << std::endl;
    std::cout << Atoi("--1234") << std::endl;
    return 0;
}
