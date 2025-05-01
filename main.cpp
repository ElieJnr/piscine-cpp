#include <iostream>
#include "ultimatepointone.cpp"

int main() {
    int a = 0;
    int* b = &a;
    int** n = &b;
    UltimatePointOne(&n);  
    std::cout << a << std::endl;  
    return 0;
}