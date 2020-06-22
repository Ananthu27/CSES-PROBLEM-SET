#include <iostream>
#define ul unsigned long
ul weird(ul n)
{
    if (!(n % 2))
        return n / 2;
    else
        return (n * 3 + 1);
}
int main()
{
    ul n;
    std::cin >> n;
    while (n != 1)
    {
        std::cout << n << " ";
        n = weird(n);
    }
    std::cout << n << std::endl;
    return 0;
}