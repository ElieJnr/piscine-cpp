#include <iostream>

void ultimatedivmod(int* a, int* b)
{
    int temp = *a / *b;
    int temp00 = *a % *b;
    *a = temp;
    *b = temp00;
}