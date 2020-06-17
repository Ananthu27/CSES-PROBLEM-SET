// You are given all numbers between 1, 2,…, n except one.
// Your task is to find the missing number.

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector<int> v;
    std::cout << "enter the value of 2<=n<=2*10^5:";
    int n;
    std::cin >> n;
    std::cout << "enter the " << n - 1 << " values :" << std::endl;
    int input;

    for (int i = 1; i < n; i++)
    {
        std::cin >> input;
        v.push_back(input);
    }

    std::sort(begin(v), end(v));
    std::adjacent_difference(begin(v), end(v), begin(v));

    int i;
    for (i = 0; i < v.size(); i++)
        if (v[i] == 2)
            std::cout << "missing number is : " << i + 1 << std::endl;

    if (i == v.size())
        std::cout << "missing number is : " << n << std::endl;

    return 0;
}