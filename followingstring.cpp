#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    map<int,int>m;
    map<int,int> tot;
    int count =0;

    
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        m[v[i]]++;
        tot[v[i]]++;

    }

    
    for (int i = 0; i < n; i++)
    {
        cout<<char(97+(tot[v[i]]-m[v[i]]));
        m[v[i]]--;
    }
    cout<<endl;
    
    
    
 
 }

 int main(){
    int t;
    scanf("%d",&t);
    
    
    while (t--)
    {
        solve();
    }
    




}