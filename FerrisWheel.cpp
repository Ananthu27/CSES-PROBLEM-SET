#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main()
{
    ll n, wl, a = 0;
    cin >> n >> wl;
    vector<ll> v;
    v.resize(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    for (ll i = 0, j = (n - 1); i < j;)
    {
        while (i < j && v[i] + v[j] > wl)
            --j;
        if (i >= j)
            break;
        ++a;
        ++i, --j;
    }
    cout << n - a << endl;
}