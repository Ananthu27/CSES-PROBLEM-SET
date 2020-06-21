#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
#define ll long long
int main()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll t;
        cin >> t;
        a.insert(t);
    }
    vector<ll> b;
    b.resize(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < m; i++)
    {
        int t;
        t = b[i];
        if (a.size() > 0)
        {
            auto p = a.lower_bound(t);
            if (p == a.end() || (*p > t && p != a.begin()))
            {
                --p;
                cout << *p << endl;
                a.erase(p);
            }
            else if (p == a.begin() && *p > t)
                cout << -1 << endl;
            else if (*p == t)
            {
                cout << *p << endl;
                a.erase(p);
            }
        }
        else
            cout << -1 << endl;
    }
}