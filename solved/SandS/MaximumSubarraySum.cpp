#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, input;
    ll m = -1e9, ans = -1e9;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> input;
        m = max(input, m + input);
        ans = max(ans, m);
    }
    cout << ans << endl;
    return 0;
}