#include <iostream>
#include <string>

std::string StrRev(std::string s)
{
    std::string res;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        res+= s[i];
    }
    return res;
}