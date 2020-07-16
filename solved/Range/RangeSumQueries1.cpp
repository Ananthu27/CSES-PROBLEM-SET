#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, q;
const int size = 2e5 + 1;
ll a[size];
int input;
vector<ll> ans;
int b, e;

int main()
{
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        cin >> input;
        a[i] += a[i - 1] + input;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> b >> e;
        ans.push_back(a[e] - a[b - 1]);
    }
    for (auto value : ans)
        cout << value << endl;
}
