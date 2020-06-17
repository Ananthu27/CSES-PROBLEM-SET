// You are given an array of n integers.You want to modify the array so that it is increasing,
// i.e., every element is at least as large as the previous element.

// On each turn,
// you may increase the value of any element by one.What is the minimum number of turns required ?

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
    std::vector<int> v;
    std::cout << "enter the size of array : ";

    int size = 0;
    std::cin >> size;
    int input;

    std::cout << "enter the " << size << " elements" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cin >> input;
        v.push_back(input);
    }

    int increment = 0;

    for (int i = 1; i < v.size(); i++)
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