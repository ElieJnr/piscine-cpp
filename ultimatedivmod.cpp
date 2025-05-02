// This function will divide the int a and b.
// The result of this division will be stored in the int pointed by div.
// The remainder of this division will be stored in the int pointed by mod.

#include <iostream>

void ultimatedivmod(int *a, int *b)
{
    int temp = *a / *b;
    int temp00 = *a % *b;
    *a = temp;
    *b = temp00;
}