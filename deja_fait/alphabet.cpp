#include <iostream>
#include <string>

void printAlphabet()
{
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i <= 26; i++)
    {
        std::cout << alphabet[i];
    }
    std::cout << "\n";
}