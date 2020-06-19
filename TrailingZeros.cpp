#include <iostream>
using namespace std;
#define ul unsigned long
int main()
{
    ul n, a = 0;
    cin >> n;
    for (int i = 5; i <= n; i *= 5)
        a += n / i;
    cout << a << endl;
}