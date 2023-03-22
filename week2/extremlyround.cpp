#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    scanf("%d",&n);
    int p =log10(n);
    int res =9*p+n/pow(10,p);
    cout<<res<<endl;
    
}

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }
}