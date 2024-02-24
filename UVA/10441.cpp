#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    vector<string> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    string f = vec[0];
    map<char, vector<string>> sList;
    for (size_t i = 0; i < n; i++)
    {
        sList[vec[i][0]].push_back(vec[i]);
    }
    map<string, vector<string>> adjList;
    map<string, int> indegree;
    for (size_t i = 0; i < n; i++)
    {
        string w = vec[i];
        char l = w[w.size() - 1];
        for (size_t i = 0; i < sList[l].size(); i++)
        {
            if (w != sList[l][i])
            {
                adjList[w].push_back(sList[l][i]);
                indegree[sList[l][i]]++;
            }
        }
    }
    queue<string> q;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (indegree[vec[i]] == 0)
        {
            q.push(vec[i]);
            count++;
        }
    }
    for (auto &&i : indegree)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    if (count != 1)
    {
        cout << "false" << endl;
        return;
    }
    else
    {
        count = 0;
    }

    string temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        cout<<temp<<".";
        count++;
        for (int i = 0; i < adjList[temp].size(); i++)
        {

            if (--indegree[adjList[temp][i]] == 0)
            {
                q.push(adjList[temp][i]);
            }
        }
    }
    
    


    cout<<count<<endl;
    
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}