#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int nxm = 5;
vector<vector<int>> adj = {
    {1, 3},
    {0, 2, 4},
    {1, 4},
    {0},
    {1, 2},
};
vector<bool> visited = vector<bool>(nxm, false);

void dfs(int s)
{
    if (visited[s])
        return;
    visited[s] = true;
    cout << s + 1 << endl;
    for (auto u : adj[s])
        dfs(u);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // main code START

    int start;
    cin >> start;

    dfs(start - 1);

    // main code END

    return 0;
}