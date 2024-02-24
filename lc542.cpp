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
    }
};