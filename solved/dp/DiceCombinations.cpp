#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1e6, mod = 1e9 + 7;
int n;
ll d[mxn + 1];
int main()
{
    cin >> n;
    d[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= min(i, 6); j++)
            d[i] = (d[i] + d[i - j]) % mod;
    cout << d[n] << endl;
}