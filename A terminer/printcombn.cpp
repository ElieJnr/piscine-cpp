// Instruction
// Write a function that prints all possible combinations of n different digits in ascending order.

// n will be defined as : 0 < n < 10

// Below are the references for the printing format expected.

// (for n = 1) '0, 1, 2, 3, ..., 8, 9'

// (for n = 3) '012, 013, 014, 015, 016, 017, 018, 019, 023,...689, 789'
#include <iostream>

void PrintCombN(int n)
{
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (n == 1)
    {
        for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
        {
            std::cout << numbers[i];
        }
        std::cout <<"\n";
    }
}
