#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll, ll>> a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, in, out;
    cin >> n;
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> in >> out;
        m = max(m, out);
        a.push_back(make_pair(out, in));
    }
    sort(a.begin(), a.end());
    ll end = a[0].first;
    ll count = 1;
    ll select = 0;
    while (end < m && select < n)
    {
        if (a[++select].second >= end)
        {
            count++;
            end = a[select].first;
        }
    }
    cout << count << endl;
    return 0;
}