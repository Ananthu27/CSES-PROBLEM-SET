#include <iostream>
#define ul long
using namespace std;
int main()
{
    ul n, m = 1000000007, a = 1;
    cin >> n;
    for (ul i = 0; i < n; i++)
    {
        a *= 2;
        a %= m;
    }
    cout << a % m << endl;
    return 0;
}