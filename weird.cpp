// Consider an algorithm that takes as input a positive integer n.
// If n is even, the algorithm divides it by two, and if n is odd,
// the algorithm multiplies it by three and adds one. The algorithm repeats this,
// until n is one. For example, the sequence for n=3 is as follows:

// 3→10→5→16→8→4→2→1

// Your task is to simulate the execution of the algorithm for a given value of n.

#include <iostream>

int weird(int n)
{
    if (!(n % 2))
        return n / 2;
    else
        return (n * 3 + 1);
}

int main()
{
    int n;

    std::cout << "enter a number 1<=n<=10^6 :";
    std::cin >> n;

    while (n != 1)
    {
        std::cout << n << " ";
        n = weird(n);
    }

    std::cout << n << std::endl;

    return 0;
}