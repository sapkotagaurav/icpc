<<<<<<< HEAD
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool check(int x, int y, int i, int j)
    {
        if (i >= 0 && i < x && j >= 0 && j < y)
            return true;
        return false;
    }
    void bfs(int x, int y, int i, int j, vector<vector<int>> &mat)
    {
        int DX[4] = {0, 0, 1, -1};
        int DY[4] = {1, -1, 0, 0};
        queue<pair<int, int>> q;
        q.push({i, j});
        while (!q.empty())
        {
            pair<int, int> temp = q.front();
            q.pop();
            for (int d = 0; d < 4; d++)
            {
                int new_x = temp.first +DX[d];
                int new_y = temp.second +DY[d];
                if(check(x,y,new_x,new_y)){
                    mat[new_x]
                }
            }
        }
    }
    vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
    {
=======
#include<iostream>
#include<vector>
#include<queue>


using namespace std;
class Solution {
public:
bool check(int xBound, int yBound, int x, int y){
    if(x>=0 && x<xBound && y>=0 && y<yBound) return true;
    return false;
}
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ret(mat.size(),vector<int>(mat[0].size(),10001));
        queue<pair<int,int>> q;
        int DX[]={0,0,1,-1};
        int DY[]={1,-1,0,0};
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] ==0)
                {
                    q.push({i,j});
                    ret[i][j] =0;
                }
                
            }
            
        }
        while (!q.empty())
        {
            pair<int,int> temp = q.front();
            q.pop();
            for (int d = 0; d < 4; d++)
            {
                int new_x = temp.first+DX[d];
                int new_y = temp.second+ DY[d];
                if(check(mat.size(),mat[0].size(),new_x,new_y) && ret[new_x][new_y]>ret[temp.first][temp.second]+1){
                    //cout<<temp.first<<" "<<temp.second<<" "<<new_x<<" "<<new_y<<" "<<ret[new_x][new_y]<<" "<<mat[te]
                    ret[new_x][new_y] =ret[temp.first][temp.second]+1;
                    q.push({new_x,new_y});

                }

            }
            

        }
        return ret;
        
        
        

        
>>>>>>> 4e644d2d65f14bd1c4a2cf419d4e3415b0e82a1d
    }
};