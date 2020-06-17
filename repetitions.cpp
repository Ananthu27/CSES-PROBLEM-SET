// You are given a DNA sequence : a string consisting of characters A, C, G, and T.
// Your task is to find the longest repetition in the sequence.This is a
// maximum - length substring containing only one type of character.

#include <iostream>
#include <vector>

int main()
{
    std::vector<char> v;
    std::cout << "enter the sequence : " << std::endl;
    char input;

    while (std::cin >> input)
    {
        if (input != 'a' && input != 'c' && input != 'g' && input != 't')
            break;
        v.push_back(input);
    }

    int mcount = 0, ccount = 1;

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] == v[i])
            ccount++;
        else
        {
            std::cout << ccount << std::endl;
            if (mcount < ccount)
                mcount = ccount;
            ccount = 1;
        }
    }
    std::cout << mcount << std::endl;
    return 0;
}