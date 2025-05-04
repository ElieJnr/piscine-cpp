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
int Atoi(std::string s)
{
    int result = 0;
    int sign = 1;
    if (s[0] == '-')
    {
        s = s.substr(1);
        sign = -1;
    }
    else if (s[0] == '+')
    {
        s = s.substr(1);
    }
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
    return result * sign;
}