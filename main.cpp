#include <iostream>
#include "ultimatedivmod.cpp"
int main()
{
    int a = 13;
	int b = 2;
    ultimatedivmod(&a,&b);
    std::cout << a << " " << b << std::endl;
    return 0;
}