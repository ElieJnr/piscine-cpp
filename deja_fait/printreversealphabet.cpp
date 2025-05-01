#include <iostream>
#include <string>

void printreversealphabet()
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 25; i >= 0; i--)
    {
        std::cout << alphabet[i];
    }
    std::cout << "\n" ;
}