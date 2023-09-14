#include <iostream>
#include <string>
#include <vector>
#include<queue>

using namespace std;

class Solution {
public:

    // void print(vector<vector<char>>&grid){
    //     for (auto &&i : grid)
    //     {
    //         for (auto &&j : i)
    //     {
    //        cout<<j<<" "; 
    //     }
    //     cout<<endl;
    //     }
    //     cout<<endl<<endl;
        
    // }
    void bfs(int i, int j, vector<vector<char>> &grid){
        queue<pair<int,int>> q;
        q.push(make_pair(i,j));
        while (!q.empty())
        {
            
            pair<int,int> temp = q.front();
            q.pop();
            grid[temp.first][temp.second] ='0';
            if (temp.first<grid[0].size()-1 && grid[temp.first][temp.second+1] =='1')
            {
                q.push(make_pair(temp.first,temp.second+1));
            }
            if (temp.first<grid.size()-1 && grid[temp.first+1][temp.second] =='1')
            {
                q.push(make_pair(temp.first+1,temp.second));
            }
            
            
        }
        
    }


    int numIslands(vector<vector<char>>& grid) {
        int num =0;
        for (size_t i = 0; i < grid.size(); i++)
        {
            for (size_t j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] =='1')
                {
                    bfs(i,j,grid);
                    num++;
                }
                
            }
            
        }
        return num;
        

        
        
    }
};
int main(){
    vector<vector<char>> a {{'1','1'}};
    Solution s;
    cout<<s.numIslands(a)<<endl;
}