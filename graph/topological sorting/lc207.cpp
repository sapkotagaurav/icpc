#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        map<int, int> inDegree;
        map<int, vector<int>> adjList;
        for(int i =0 ; i<prerequisites.size();i++){
            adjList[prerequisites[i][1]].push_back(prerequisites[i][0]);
            inDegree[prerequisites[i][0]]++;
        }
        queue<int> q;

        for (int i = 0; i < numCourses; i++)
        {
            if(inDegree[i] ==0) q.push(i);
        }
        int temp;
        while(!q.empty()){
            temp = q.front();
            q.pop();
            for (int i = 0; i < adjList[temp].size(); i++)
            {
                
                if(--inDegree[adjList[temp][i]]==0){
                    q.push(adjList[temp][i]);
                }
            }
            
        }
        for (int i = 0; i < numCourses; i++)
        {
            if(inDegree[i] !=0) return false;
        }
        return true;
        
        
    }
};

int main()
{
}