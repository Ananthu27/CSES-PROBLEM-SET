#include <iostream>
#include <vector>
using namespace std;
#define ll long long unsigned
int main()
{
    ll n;
    cin >> n;
    ll sum = (n * (n + 1)) / 2;
    if (sum % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    sum /= 2;
    vector<ll> s1, s2;
    ll sum1 = 0;
    for (ll i = n; i >= 1; i--)
    {
        if (i + sum1 <= sum)
        {
            s1.push_back(i);
            sum1 += i;
        }
    }
    for (ll i = 0; i < n; i++)
        s2.push_back(i + 1);
    for (ll i = 0; i < s1.size(); i++)
        s2[s1[i] - 1] = 0;
    cout << "YES" << endl;
    cout << s1.size() << endl;
    for (auto value : s1)
        cout << value << " ";
    cout << endl;
    cout << n - s1.size() << endl;
    for (ll i = 0; i < s2.size(); i++)
        if (s2[i])
            cout << s2[i] << " ";
    cout << endl;
    return 0;
}