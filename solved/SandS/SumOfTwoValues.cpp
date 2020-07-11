#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<pair<int, int>> a;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // main code START
    ll n, sum, input;
    cin >> n >> sum;
    for (ll i = 0; i < n; i++)
    {
        cin >> input;
        a.push_back(make_pair(input, i + 1));
    }
    if (n < 2)
    {
        cout << "IMPOSSIBLE" << endl;
        exit(0);
    }
    sort(a.begin(), a.end());

    for (int i = 0, j = n - 1; i < n, j >= 0;)
    {
        if (j <= i)
            break;
        int s = a[i].first + a[j].first;
        if (s == sum)
        {
            cout << a[i].second << " " << a[j].second << endl;
            exit(0);
        }
        if (s > sum)
            j--;
        else
            i++;
    }
    cout << "IMPOSSIBLE" << endl;

    // main code END

    return 0;
}