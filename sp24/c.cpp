#include<bits/stdc++.h>

 using namespace std; 

void solve(){
    int x;
    scanf("%d",&x);
    long long s =0;
    long long a;
    for (size_t i = 0; i < x; i++)
    {
        scanf("%lld",&a);
        s = s +a;
    }
    if(fmod(sqrt(s) ,1) ==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

}
 int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
       solve();
    }
    




}