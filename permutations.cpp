// A permutation of integers 1, 2,…, n is called beautiful if there are
// no adjacent elements whose difference is 1.

// Given n,
// construct a beautiful permutation if such a permutation exists.

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool test(std::vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        if (v[i] == i + 1)
            continue;
        else
            return false;
    return true;
}

int main()
{
    std::vector<int> v;

    std::cout << "enter the size/max_value :";
    int size;
    std::cin >> size;

    for (int i = 1; i <= size; i++)
        v.push_back(i);

    int i = 0;

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
            std::cout
                << value << " ";
        std::cout << std::endl;
    }
    else
        std::cout << "NO SOLUTION" << std::endl;

    return 0;
}