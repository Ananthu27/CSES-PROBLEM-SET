#include <iostream>
#include <vector>
#define ul unsigned long
int main()
{
    std::vector<ul> v;
    ul size;
    std::cin >> size;
    ul input;
    for (ul i = 0; i < size; i++)
    {
        std::cin >> input;
        v.push_back(input);
    }
    ul increment = 0;
    for (ul i = 1; i < v.size(); i++)
    {
        while (v[i - 1] > v[i])
        {
            increment++;
            v[i]++;
        }
    }
    std::cout << increment << std::endl;
    return 0;
}