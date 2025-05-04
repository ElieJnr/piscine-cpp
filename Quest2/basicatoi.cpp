#include <iostream>
#include <string>

// std::tuple<bool, int> isNumber(char c)
// {
//     for (int i = 48; i <= 57; i++)
//     {
//         if (c == char(i))
//         {
//             return {true, i};
//         }
//     }
//     return {false, -1};
// }
int BasicAtoi(std::string s)
{
    int result = 0;
    for (auto &&i : s)
    {
        int digit = i - '0';
        result = result * 10 + int(digit);
    }
    return result;
}
// 48-57