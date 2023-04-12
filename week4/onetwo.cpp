#include<bits/stdc++.h>

using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector< unsigned long long> mult(n);
    cin>>mult[0];
    int a;
    for (int i = 1; i < n; i++)
    {
        cin>>a;
        mult[i] = mult[i-1]*a;
    }
    unsigned long long dd = mult[n-1];

    for (int i = 0; i < n; i++)
    {
        if(mult[i]==0){
            cout<<-1<<endl;
        }
        if(mult[i] == dd/mult[i]){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    
    
}

int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}