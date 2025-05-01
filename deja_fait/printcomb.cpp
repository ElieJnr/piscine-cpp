#include <iostream>

void PrintComb()
{
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (i < j && j < k)
                {
                    std::cout << i ;
                    std::cout << j ;
                    std::cout << k ;
                    std::cout << " " ;
                }
                else 
                {
                    continue;
                }
            }
        }
    }
}