#include <iostream>
#include <vector>
using namespace std;
#define ul unsigned long long
int main()
{
    ul s;
    cin >> s;
    vector<vector<int>> v = vector<vector<int>>(s, vector<int>(2, 0));
    for (ul i = 0; i < s; i++)
        cin >> v[i][0] >> v[i][1];
    ul a, b, n, m;
    for (ul i = 0; i < s; i++)
    {
        a = v[i][0];
        b = v[i][1];
        n = (2 * b - a) / 3;
        m = (2 * a - b) / 3;
        if (a == (2 * m + n) && b == (2 * n + m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}