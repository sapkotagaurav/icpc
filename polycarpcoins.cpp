#include<bits/stdc++.h>

 using namespace std; 

 void solve(){
    int n;
    scanf("%d", &n);
    if(n%3==0){
        printf("%d %d\n",n/3,n/3);
    }else if((n+1) %3 ==0){
        printf("%d %d\n", (n+1)/3 -1, (n+1)/3);
    }else{
        printf("%d %d\n", (n+2)/3, (n+2)/3 -1);
    }
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }




}