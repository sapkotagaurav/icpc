#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    long long  a,b,c,d,e,f,g,h,dist=0;
    scanf("%lld %lld",&a,&b);
    scanf("%lld %lld",&c,&d);
    scanf("%lld %lld",&e,&f);
    scanf("%lld %lld",&g,&h);
    if(a==c){
        dist =   abs(b-d);

    }else if(a==e){
        dist =  abs(b-f);

    }else{
        dist =  abs(b-h);
    }
    cout<<dist*dist<<endl;

    

 
 }

 int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
       solve();
    }
    




}