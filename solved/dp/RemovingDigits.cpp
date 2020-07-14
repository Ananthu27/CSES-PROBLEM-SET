#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, save;
const int mxn = 1e6 + 1;
int d[mxn];

int main()
{
    cin >> n;
    set<int> temp;
    int count = 0;
    while (n > 0)
    {
        temp.clear();
        save = n;
        while (n > 0)
        {
            temp.insert(n % 10);
            n /= 10;
        }
        n = save - *(--temp.end());
        count++;
    }
    cout << count;
}