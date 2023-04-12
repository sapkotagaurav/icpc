#include<bits/stdc++.h>

using namespace std; 

int main(){
    long long q;
    cin>>q;
    long long n,a,b;
    while(q--){
    cin>>n>>a>>b;
    if(a*2 <=b){
        cout<<n*a<<endl;
        continue;
    }
    if(a>=b/2){
        if(n%2 ==0){
            cout<<n/2*b<<endl;
        }else{
            cout<<n/2*b + a<<endl;
        }
        continue;
    }else{
        cout<<n*a<<endl;
    }
    if(n==1){
        cout<<a<<endl;
    }

    }



}