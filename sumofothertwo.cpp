#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        if(a+b==c or a+c==b or b+c==a){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;

    }




}