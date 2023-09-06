#include<bits/stdc++.h>

 using namespace std; 

 void solve(){
    int n;
    scanf("%d", &n);
    string s;
    cin>> s;
    map<char, vector<int>> m;
    char c = s[0];
    for (size_t i = 2; i < n; i++)
    {
        if(s[i-1] ==c){
            cout<<c;
            c= s[i];
            i++;
        }


        
        
    }
    cout<<s[n-1];
    cout<<endl;
    
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }




}