#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if (a == b)
    {
        printf("%d\n",c);
    }else if(a == c){
        printf("%d\n",b);
    }else{
        printf("%d\n",a);
    }
    
 
 }

 int main(){

    int x;
    scanf("%d",&x);
    while(x--) solve();




}