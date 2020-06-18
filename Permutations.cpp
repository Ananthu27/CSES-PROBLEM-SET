// marked for better execution as time limit exceeded
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define ul unsigned long
bool test(std::vector<ul> v)
{
    for (ul i = 0; i < v.size(); i++)
        if (v[i] == i + 1)
            continue;
        else
            return false;
    return true;
}
int main()
{
    std::vector<ul> v;
    ul size;
    std::cin >> size;
    for (ul i = 1; i <= size; i++)
        v.push_back(i);
    ul i = 0;
    do
    {
        for (i = 1; i < v.size(); i++)
            if (abs(v[i - 1] - v[i]) == 1)
                break;
        if (i == v.size())
            break;
    } while (std::next_permutation(begin(v), end(v)));
    if (!test(v))
    {
        for (auto value : v)
            std::cout << value << " ";
        std::cout << std::endl;
    }
    else if (v.size() == 1)
        std::cout << 1 << std::endl;
    else
        std::cout << "NO SOLUTION" << std::endl;
    return 0;
}