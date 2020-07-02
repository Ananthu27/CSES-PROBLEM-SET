#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    multiset<ll> a;
    ll input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        auto p = a.upper_bound(input);
        if (p != a.end())
            a.erase(p);
        a.insert(input);
    }
    cout << a.size() << endl;
    return 0;
}