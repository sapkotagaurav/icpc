#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cities, trips;
    scanf("%d %d", &cities, &trips);
    map<int, vector<pair<int, int>>> adjList;
    for (size_t i = 0; i < trips; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        adjList[a].push_back({c, b});
        adjList[b].push_back({c, a});
    }
    map<int, int> coinsmap;
    int lastcoin =1;
    for (size_t i = 0; i < 7; i++)
    {
        int x;
        scanf("%d", &x);
        coinsmap[x]++;
        if(x>lastcoin) lastcoin =x;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    // for (size_t i = 0; i < adjList[1].size(); i++)
    // {
    //     q.push(adjList[1][i]);
    // }
    int coins = 0;

    int cost = 0;
    map<int, int> djik;
    
    for (size_t i = 2; i < cities; i++)
    {
        djik[i] = INT_MAX;
    }
    djik[1] = 0;
    q.push({0, 1});
    map<int,int> costmap;

    while (!q.empty())
    {
        if (coins >= 7)
        {
            break;
        }
        pair<int, int> temp = q.top();
        coins = coins + coinsmap[temp.second];
        lastcoin = temp.second;
        
        q.pop();
        for (int i = 0; i < adjList[temp.second].size(); i++)
        {
            if (djik[adjList[temp.second][i].second] > djik[temp.second] + adjList[temp.second][i].first)
            {
                q.push(adjList[temp.second][i]);
                djik[adjList[temp.second][i].second] = djik[temp.second] + adjList[temp.second][i].first;
            }
        }
    }

    if (coins >= 7)
    {
        printf("%d\n", djik[lastcoin]);
    }
    else
    {
        printf("%d\n", 1);
    }
}