#include <iostream>
#include <set>
#include <array>

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    ll n = 0, in = 0, out = 0;
    cin >> n;
    set<array<int, 2>> a;
    for (int i = 0; i < n; i++)
    {
        cin >> in >> out;
        a.insert({2 * in, 1});
        a.insert({2 * out + 1, -1});
    }
    int ans = 0, sum = 0;
    for (auto value : a)
    {
        sum += value[1];
        ans = max(ans, sum);
    }
    cout << ans << endl;
}