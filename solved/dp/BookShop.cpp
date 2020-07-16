#include <bits/stdc++.h>
using namespace std;
const int maxprice = 1e5 + 1;
int n, x;
int price[1001];
int pages[1001];
int d[maxprice];
int main()
{
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> price[i];
    for (int i = 0; i < n; i++)
        cin >> pages[i];

    for (int i = 0; i < n; i++)
        for (int j = x; j >= price[i]; j--)
            d[j] = max(d[j], d[j - price[i]] + pages[i]);
    cout << d[x] << endl;
}