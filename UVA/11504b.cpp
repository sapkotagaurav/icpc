#include <bits/stdc++.h>
using namespace std;

void DFS(const vector<vector<int>> &adjList,vector<bool> &visited,vector<int> &topoSort, int u)
{
    visited[u] = true;
    for (int i = 0; i < adjList[u].size(); ++i)
    {
        int v = adjList[u][i];
        if (!visited[v])
            DFS(adjList, visited, topoSort, v);
    }
    topoSort.push_back(u);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> adjList(n + 1);
        vector<bool> visited(n + 1, false);
        vector<int> topoSort;

        for (int i = 0; i < m; ++i)
        {
            int u, v;
            cin >> u >> v;
            adjList[u].push_back(v);
        }
        for (int u = 1; u <= n; ++u)
            if (!visited[u])
                DFS(adjList, visited, topoSort, u);

        reverse(topoSort.begin(), topoSort.end());

        visited.assign(n + 1, false);
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            int u = topoSort[i];
            if (!visited[u])
            {
                DFS(adjList, visited, topoSort, u);
                ++count;
            }
        }
        
        cout << count << endl;
    }
    return 0;
}