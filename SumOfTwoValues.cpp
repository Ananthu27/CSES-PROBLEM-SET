#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n, l;
    cin >> n >> l;
    set<pair<ll, ll>> a, b;
    ll input;
    for (ll i = 0; i < n; i++)
    {
        cin >> input;
        auto j = a.begin();
        for (; j != a.end(); j++)
            if (j->first == input)
                break;
        if (j == a.end())
            a.insert(make_pair(input, i));
        else
        {
            auto k = b.begin();
            for (; k != b.end(); k++)
            {
                if (k->first == input)
                    break;
            }
            if (k == b.end())
                b.insert(make_pair(input, i));
            else
                continue;
        }
    }
    for (auto i = b.begin(); i != b.end(); i++)
        a.insert(*i);

    vector<pair<ll, ll>> v(a.begin(), a.end());
    for (ll i = 0; i < v.size();)
    {
        ll j = v.size() - 1;
        while (j > i && v[j].first + v[i].first != l)
            --j;
        if (i >= j)
        {
            if (i == v.size() - 1)
            {
                cout << "IMPOSSIBLE" << endl;
                break;
            }
            i++;
        }
        else
        {
            cout << v[i].second + 1 << " " << v[j].second + 1 << endl;
            break;
        }
    }
}