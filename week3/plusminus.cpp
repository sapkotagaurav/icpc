#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a+b==c)
    {
        printf("%s\n","+");
    }else{
        printf("%s\n","-");
    }
    
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
}