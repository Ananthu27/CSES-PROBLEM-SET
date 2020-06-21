#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
vector<ll> shorten(ll i, vector<ll> v)
{
    vector<ll> newv(v.begin() + i, v.end());
    return newv;
}
int main()
{
    ios::sync_with_stdio(false);
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> vn;
    vn.resize(n);
    for (ll i = 0; i < n; i++)
        cin >> vn[i];

    vector<ll> vm;
    vm.resize(m);
    for (ll i = 0; i < m; i++)
        cin >> vm[i];

    ll a = 0;
    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    for (ll i = 0, j = 0; i < n; i++)
    {
        while (j < m && vm[j] < vn[i] - k)
            ++j;
        if (j < m && vm[j] <= vn[i] + k)
        {
            ++j;
            ++a;
        }
    }

    cout << a << endl;
}
