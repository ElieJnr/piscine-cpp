#include <iostream>
#include <string>

bool isNumber(char c)
{
    for (int i = 48; i <= 57; i++)
    {
        if (c == char(i))
        {
            return true;
        }
    }
    return false;
}
int BasicAtoi2(std::string s)
{
    int result = 0;
    for (auto &&i : s)
    {
        if (isNumber(i))
        {
            int digit = i - '0';
            result = result * 10 + int(digit);
        }
        else
        {
            return 0;
        }
    }
    return result;
}