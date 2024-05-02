#include<bits/stdc++.h> 

 using namespace std; 

 void solve(){
    int x;
    cin>>x;
    set<string> se;
    for (int i = 0; i < x; i++)
    {
        string s;
        cin>>s;
        se.insert(s);


    }
    cout<<se.size()<<endl;
    
 
  
 
 }
 

 int main(){

    int t;
    cin>>t;
    while(t--) solve();

 

}
