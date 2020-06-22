#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n = 0, in = 0, out = 0;
    cin >> n;
    vector<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        cin >> in >> out;

        auto pout = find(b.begin(), b.end(), in);
        if (pout != b.end())
            b.erase(pout);
        else
            a.push_back(in);

        auto pin = find(a.begin(), a.end(), out);
        if (pin != a.end())
            a.erase(pin);
        else
            b.push_back(out);
    }
    vector<pair<ll, int>> time;
    for (ll i = 0; i < a.size(); i++)
    {
        ll j;
        for (j = 0; j < time.size(); j++)
        {
            if (time[j].first == a[i])
            {
                ++time[j].second;
                break;
            }
        }
        if (j == time.size())
            time.push_back(make_pair(a[i], 1));
    }
    for (ll i = 0; i < b.size(); i++)
    {
        ll j;
        for (j = 0; j < time.size(); j++)
        {
            if (time[j].first == b[i])
            {
                --time[j].second;
                break;
            }
        }
        if (j == time.size())
            time.push_back(make_pair(b[i], -1));
    }
    sort(time.begin(), time.end());
    ll ans = 0, sum = 0;
    for (auto p : time)
    {
        sum += p.second;
        if (ans < sum)
            ans = sum;
    }
    cout << ans << endl;
}

// #include <iostream>
// #include <vector>

// #define ll long long

// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     ll n = 0, in = 0, out = 0;
//     cin >> n;
//     vector<ll> a;
//     ll max_size = 0;

//     for (ll i = 0; i < n; i++)
//     {
//         cin >> in >> out;
//         if ((out + 1) > max_size)
//         {
//             a.resize(out + 1);
//             max_size = out + 1;
//         }
//         ++a[in];
//         --a[out];
//     }

//     ll ans = 0, sum = 0;
//     for (ll i = 0; i < a.size(); i++)
//     {
//         if (a[i])
//         {
//             sum += a[i];
//             if (sum > ans)
//                 ans = sum;
//         }
//     }
//     cout << ans << endl;
// }
