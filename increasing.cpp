#include<bits/stdc++.h>

 using namespace std; 

 void solve(){
    map<int,bool> m;
    int n;
    cin>>n;
    int num;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        if(m[v[i]]){
            cout<<"NO"<<endl;
            return;
        }else{
            m[v[i]] = true;
        }
    }
    
    cout<<"YES"<<endl;
    
 
 }

 int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }




}