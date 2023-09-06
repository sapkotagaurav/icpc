#include<bits/stdc++.h>

 using namespace std; 


 void solve(){
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    vector<int> vs;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (size_t i = 0; i < n-1; i++)
    {
        if(v[i+1]-v[i]<=1){
            vs.push_back(v[i]);
        }
    }
    if(v.size()-vs.size() ==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
    
    
    
 }

 int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }




}