#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    int num,k;
    scanf("%d %d", &num,&k);
    vector<int> a(num);
    vector<int> b(num);
    vector<pair<int,int>> c(num);
    map<int,int> pos;
    map<pair<int,int>,int> pos2;
    map<pair<int,int>,int> pos3;

    for (size_t i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
        pos[i] =a[i];
        c[i] = make_pair(a[i],i);
    }
    for (size_t i = 0; i < num; i++)
    {
        scanf("%d", &b[i]);
        pos2[make_pair(pos[i],i)] = b[i];
    }
    sort(c.begin(),c.end());
    sort(b.begin(),b.end());
    for (size_t i = 0; i < num; i++)
    {
        pos3[c[i]] = b[i];
    }
    for (size_t i = 0; i < num; i++)
    {
        printf("%d ",pos3[make_pair(pos[i],i)]);
    }
    
    printf("\n");
    
    
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();




}