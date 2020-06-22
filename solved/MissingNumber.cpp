#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define ul unsigned long
int main()
{
    std::vector<ul> v;
    ul n;
    std::cin >> n;
    ul input;
    for (ul i = 1; i < n; i++)
    {
        std::cin >> input;
        v.push_back(input);
    }
    std::sort(begin(v), end(v));
    std::adjacent_difference(begin(v), end(v), begin(v));
    ul i;
    bool flag = true;
    for (i = 0; i < v.size(); i++)
        if (v[i] == 2)
        {
            std::cout << i + 1 << std::endl;
            flag = false;
        }
    if (i == v.size() && flag)
        std::cout << n << std::endl;
    return 0;
}