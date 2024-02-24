#include<bits/stdc++.h>

 using namespace std;
 void solve(){
    int n,m,k;
    scanf("%d %d %d", &n,&m,&k);
    vector<int>a(n),b(m);
    int l=0,oo=0;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<=k) l++;
    }
    for (size_t i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        if(b[i]<=k) oo++;
    }
    if(l+oo<k){
        cout<<"no"<<endl;return ;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    map<int,bool> isdone;
    if(a[k/2]>k ||b[k/2]>k){
        cout<<"NO"<<endl;return;
    }
    int c1=0,c2=0;
    for (int i = 0; i < a.size(); i++)
    {
        if(i>k/2) break;
        if (!isdone[a[i]])
        {
            isdone[a[i]] = true;
            c1++;
        }
        
        
    }
    for (int i = 0; i < b.size(); i++)
    {
        if(i>k/2) break;
        if (!isdone[b[i]])
        {
            isdone[b[i]] = true;
            c2++;
        }
        
        
    }
    for (size_t i = 1; i <= k; i++)
    {
        if(!isdone[i]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
    
    
    
    
    
    
    
    
    
    

 
 } 

 int main(){

    int t;
    scanf("%d",&t);
    while(t--) solve();




}