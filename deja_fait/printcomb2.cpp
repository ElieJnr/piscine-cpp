#include <iostream>
#include <iomanip>

void PrintComb2()
{
    for (int i = 0; i < 99; i++)
    {
        for (int j = i+1; j < 100; j++)
        {
            std::cout << std::setfill('0') << std::setw(2) << i;
            std::cout << " ";
            std::cout << std::setfill('0') << std::setw(2) << j;
            std::cout << ", ";
        }
    }
}
