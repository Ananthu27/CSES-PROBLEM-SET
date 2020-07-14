#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, x;
const int size = 1e6 + 1, mod = 1e9 + 7;
int coins[100];
ll d[size];

int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    d[0] = 1;
    for (int j = 0; j < n; j++)
        for (int i = 1; i <= x; i++)
            if (coins[j] <= i)
                d[i] = (d[i] + d[i - coins[j]]) % mod;
    cout << d[x] << endl;
}