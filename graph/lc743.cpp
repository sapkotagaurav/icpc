#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        map<int, vector<pair<int, int>>> adjList;
        map<int, int> dis;
        for (int i = 0; i < times.size(); i++)
        {
            adjList[times[i][0]].push_back({times[i][2], times[i][1]});
            dis[times[i][0]] = 101;
            dis[times[i][1]] = 101;
        }
        dis[k] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});
        while (!pq.empty())
        {
            pair<int, int> temp = pq.top();
            

            pq.pop();
            for (int i = 0; i < adjList[temp.second].size(); i++)
            {
                if (dis[adjList[temp.second][i].second] > dis[temp.second] + adjList[temp.second][i].first)
                {
                    pq.push(adjList[temp.second][i]);
                    dis[adjList[temp.second][i].second] = dis[temp.second] + adjList[temp.second][i].first;
                }
            }
        }
        int mm =0;
        for(map<int,int>::const_iterator it = dis.begin();it!= dis.end();it++){
            if(it->second>mm) mm=it->second;
            if(it->second==101) return -1;

        }
        if(dis[k]!=0) return -1;
        return mm;
    }
};

int main()
{
    vector<vector<int>> v;
    int n;
    cin >> n;
    vector<int> a;
    int x, y, z;
    while (n--)
    {
        cin >> x >> y >> z;
        a.push_back(x);
        a.push_back(y);
        a.push_back(z);
        v.push_back(a);
        a.clear();
    }

    Solution s;
    cout << "-------------" << endl;
    int t, l;
    cin >> t >> l;
    cout << s.networkDelayTime(v, t, l) << endl;
}