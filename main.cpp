#include <iostream>
#include <string>
#include <vector>
#include "sortintegertable.cpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(4);
    SortIntegerTable(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    return 0;
}
