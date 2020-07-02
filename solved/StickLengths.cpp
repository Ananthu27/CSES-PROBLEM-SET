#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll input;
    vector<ll> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(input);
    }
    sort(a.begin(), a.end());
    ll median = a[n / 2];
    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans = ans + abs(a[i] - median);
    cout << ans << endl;
}