#include <bits/stdc++.h>
using namespace std;

const int nxm = 5;
vector<vector<int>> adj = {
    {2, 3},
    {2, 4},
    {0, 1, 3, 4},
    {0, 2},
    {1, 2},
};

vector<bool> visited(nxm);

void dfs(int s)
{
    if (visited[s])
        return;
    visited[s] = true;
    for (auto u : adj[s])
        dfs(u);
}

bool connected()
{
    dfs(0);
    for (auto t : visited)
        if (!t)
            return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // main code START

    cout << (connected() ? "connected" : "diconnected") << endl;

    // main code END

    return 0;
}