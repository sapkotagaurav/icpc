#include <bits/stdc++.h>
using namespace std;

// class Compare
// {
// public:
//   bool operator()(pair<int, int> p1, pair<int, int> p2)
//   {
//     return p1.second < p2.second;
//   }
// };

class Graph
{
public:
  int n;
  map<int, vector<pair<int, int>>> adjList;

  Graph(int x, vector<pair<pair<int, int>, int>> &p, bool d)
  {

    for (int i = 0; i < p.size(); i++)
    {
      adjList[p[i].first.first].push_back(make_pair(p[i].first.second, p[i].second));
      if (!d)
      {
        adjList[p[i].first.second].push_back(make_pair(p[i].first.first, p[i].second));
      }
    }
  }
  void printAdjList()
  {

    for (auto itr : adjList)
    {
      // cout << itr.first << ": ";
      printf("%d : ", itr.first);
      for (auto e : itr.second)
      {
        // cout << e << " ";
        printf("(%d,%d), ", e.first, e.second);
      }
      printf("\n");
    }
  }
  int disconnected(map<int,bool> &visited){
    for (map<int,vector<pair<int,int>>>::const_iterator i = adjList.begin(); i != adjList.end(); i++)
    {
      if(!visited[i->first]){
        return i->first;
      }
    }
    return -1;
    
  }

  void bfs(int start,map<int,bool> &visited)
  {
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
      int temp = q.front();
      q.pop();
      visited[temp] = true;
      printf("%d ", temp);
      for (int i = 0; i < adjList[temp].size(); i++)
      {
        if (!visited[adjList[temp][i].first])
        {
          q.push(adjList[temp][i].first);
          visited[adjList[temp][i].first] = true;
        }
      }
    }
    int a = disconnected(visited);
    if (a!=-1)
    {
      bfs(a,visited);
      
    }
    
    printf("\n");
  }

  void dfs(int start, map<int, bool> &visited)
  {
    visited[start] = true;
    printf("%d ", start);

    for (int i = 0; i < adjList[start].size(); i++)
    {
      if (!visited[adjList[start][i].first])
      {
        dfs(adjList[start][i].first, visited);
      }
    }
    int a = disconnected(visited);
    if (a!=-1)
    {
      dfs(a,visited);
    }
    
    // printf("\n");
  }

  
  void djikstra(int start)
  {
    map<int, int> dis;
    for (auto &&i : adjList)
    {
      dis[i.first] = INT_MAX;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    while (!pq.empty())
    {
        pair<int, int> temp = pq.top();
        pq.pop();
        printf("%d:%d \n",&temp.second,temp.first);
        for (int i = 0; i < adjList[temp.second].size(); i++)
        {
            if(dis[adjList[temp.second][i].second] > dis[temp.second]+ adjList[temp.second][i].first) {
                dis[adjList[temp.second][i].second] = dis[temp.second]+ adjList[temp.second][i].first;
                pq.push(make_pair(dis[adjList[temp.second][i].second], adjList[temp.second][i].second));
            }    
        }
    }
    
    for (auto &&i : dis)
    {
      cout << i.first << ":" << i.second << endl;
    }

  }
};

int main()
{
  vector<pair<pair<int, int>, int>> p;

  // g.printAdjList();
  int n, x, y, d, weighted;
  int ed;
  scanf("%d", &n);
  scanf("%d", &weighted);
  scanf("%d", &ed);
  if (weighted)
  {
    for (int i = 0; i < ed; i++)
    {
      scanf("%d %d %d", &x, &y, &d);
      p.push_back(make_pair(make_pair(x, y), d));
    }
  }
  else
  {
    for (int i = 0; i < ed; i++)
    {
      scanf("%d %d", &x, &y);
      p.push_back(make_pair(make_pair(x, y), 1));
    }
  }
  Graph g = Graph(n, p, false);
map<int, bool> visitedd;
  g.bfs(3,visitedd);
  map<int, bool> visited;
  g.dfs(3, visited);
  printf("\n");
  g.printAdjList();
  printf("\n");
  if (weighted)
  {
    g.djikstra(1);
  }
  return 0;
}
/*
6
1
7
6 2 5
2 1 6
1 4 1
1 3 1
3 4 3
3 5 -4
4 6 1

*/