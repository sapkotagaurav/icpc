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
        
        
        

        
    }
};