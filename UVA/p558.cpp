#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    scanf("%d %d", &n, &m);
    map<int, vector<pair<int, int>>> adjList;
    vector<int> dis(n, INT_MAX);
    dis[0] = 0;

    int x, y, t;
    for (size_t i = 0; i < m; i++)

    {
        scanf("%d %d %d", &x, &y, &t);
        adjList[x].push_back({t, y});
    }
    bool pos = false;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    while (!pq.empty())
    {
        pair<int, int> temp = pq.top();
        pq.pop();
        if (temp.first<0){
            cout<<"possible"<<endl;
            pos = true;
            break;

        }
        for (int i = 0; i < adjList[temp.second].size(); i++)
        {
            if(dis[adjList[temp.second][i].second] > dis[temp.second]+ adjList[temp.second][i].first) {
                dis[adjList[temp.second][i].second] = dis[temp.second]+ adjList[temp.second][i].first;
                pq.push(make_pair(dis[adjList[temp.second][i].second], adjList[temp.second][i].second));
            }
            
            // if(dis[adjList[temp.second][i].second] != INT_MAX){
            //     if(dis[adjList[temp.second][i].second] > dis[temp.second]+ adjList[temp.second][i].first){
            //         cout<<"possible"<<endl;
            //     }else{
            //         cout<<"not possible"<<endl;

            //     }
            //     return;
            // }else{
            //     pq.push(adjList[temp.second][i]);
            //     dis[adjList[temp.second][i].second] = dis[temp.second]+ adjList[temp.second][i].first;

            // }
        }
    }
    if(!pos){
        cout<<"not possible"<<endl;
        
    }
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