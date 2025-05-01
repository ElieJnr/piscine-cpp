#include <iostream>
#include "divmod.cpp"

int main()
{
    int a = 13;
	int b = 2;
	int div ;
	int mod;
	DivMod(a, b, &div, &mod);
    std::cout << div << "\n" << mod << std::endl ;
    return 0;
}