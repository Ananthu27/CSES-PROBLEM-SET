#include <bits/stdc++.h>
using namespace std;
const int am = 2e5;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, input;
    cin >> n;
    ll k[am];
    map<int, int> f;
    for (int i = 0; i < n; i++)
        cin >> k[i];
    int ans = 0;
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j < n && f[k[j]] < 1)
        {
            f[k[j]]++;
            ++j;
        }
        ans = max(ans, j - i);
        f[k[i]]--;
    }
    cout << ans << endl;
}