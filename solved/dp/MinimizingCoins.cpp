#include <bits/stdc++.h>
using namespace std;
#define ll long long

set<int> coins;
const int size = 1e6, nmax = numeric_limits<int>::max() / 2;

ll d[size + 1];
int n, x, input;

int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        coins.insert(input);
    }
    for (int i = 1; i <= x; i++)
    {
        d[i] = nmax;
        for (auto c : coins)
            if (c <= i)
                d[i] = min(d[i], d[i - c] + 1);
    }
    if (d[x] == nmax)
        cout << -1;
    else
        cout << d[x];
}