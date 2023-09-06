#include<bits/stdc++.h>

 using namespace std; 

 void solve(){
    string s;
    cin>>s;
    int siz = s.size();
    if(siz%2==0){
        for (int i = 0; i < siz/2; i++)
        {
            if(s[i] != s[siz/2+i]){
                cout<<"NO"<<endl;
                return;

            }
        }
        cout<<"YES"<<endl;
        
    }else{
        cout<<"NO"<<endl;
    }
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }




}