#include <iostream>

void DivMod(int a , int b ,  int* div, int* mod)
{
    *div = a / b;
    *mod = a % b;
}