#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int nxm = 6;
vector<vector<int>> adj = {
    {1, 3},
    {0, 2, 4},
    {1, 5},
    {0},
    {1, 5},
    {2, 4},
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

queue<int> q;
int distances[nxm];

void bfs(int source)
{
    visited[source] = true;
    distances[source] = 0;
    q.push(source);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        for (auto u : adj[s])
        {
            if (visited[u])
                continue;
            visited[u] = true;
            cout << u + 1 << endl;
            distances[u] = distances[s] + 1;
            q.push(u);
        }
    }

    for (auto d : distances)
        cout << d << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // main code START

    int start;
    cin >> start;

    cout << endl;
    bfs(start - 1);

    // main code END

    return 0;
}