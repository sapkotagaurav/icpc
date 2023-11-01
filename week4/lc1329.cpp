#include<bits/stdc++.h>

 using namespace std; 

 class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        map <int, vector<int>> a;
        for (int i = 0; i < m; i++)
        {
             for (int j = 0; j <n; j++)
            {
                a[i-j].push_back(mat[i][j]);
            }
            
        }
        for (auto &&i : a)
        {
            sort(i.second.begin(),i.second.end(),greater<int>());
        }
        for (int i = 0; i < m; i++)
        {
             for (int j = 0; j <n; j++)
            {
                mat[i][j] = a[i-j].back();
                a[i-j].pop_back();
            }
            
        }
        return mat;
        
    }
};

 int main(){

vector<int> a{3,3,1,1};
vector<int> b{2,2,1,2};
vector<int> c{1,1,1,2};
vector<vector<int>> d{a,b,c};
Solution s;
vector<vector<int>> e = s.diagonalSort(d);
for (auto &&i : e)
{
    for (auto &&j : i)
    {
      cout<<j<<" ";  
    }
    cout<<endl;
    
}





}