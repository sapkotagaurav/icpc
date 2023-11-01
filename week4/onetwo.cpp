#include<bits/stdc++.h>

using namespace std; 

void solve(){
    int n;
    cin>>n;
    vector< int> nums(n);
    vector<int> power(n);
    int p= 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a==2){
            p++;
        }
        nums[i]=a;
        power[i] = p;
    }
    int last = power[n-1];
    if(last ==0){
        cout<<1<<endl; return;
    }
    if(p%2!=0){
        cout<<-1<<endl; return;
    }
    for (int i = 0; i < n; i++)
    {
        if(last/2 ==power[i]){
            cout<<i+1<<endl;
            return;
        }
    }

    
    
}

int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}