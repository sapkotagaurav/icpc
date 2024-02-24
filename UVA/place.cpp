#include<bits/stdc++.h>

 using namespace std; 



 void solve(){
    int v,e;
    scanf("%d %d", &v, &e);
    map<int, vector<int>> adjList;
    int x,y;
    map<int,int> degree;
    for (size_t i = 0; i < e; i++)
    {
        scanf("%d %d", &x, &y);
        adjList[x].push_back(y);
        adjList[y].push_back(x);
        degree[x]++;
        degree[y]++;
        
        
    }

    
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();




}