#include<bits/stdc++.h>

using namespace std; 

int main(){

    int n,m,x,y;
    scanf("%d %d", &n,&m);
    vector<pair<int,int>> vecpair;
    map<int,int> ma;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &x,&y);
        vecpair.push_back(make_pair(x,y));
        ma[x]++;
        ma[y]++;
    }
    for (size_t i = 1; i <= n; i++)
    {
        if(ma[i] ==0){
            cout<<n-1<<endl;
            for (size_t j = 1; j <= n; j++)
            {
                if(i!=j){
                    cout<<i<<" "<<j<<endl;
                }
            }
            break;


        }
    }
    
    
}