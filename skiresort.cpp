#include<bits/stdc++.h>

 using namespace std; 
 void solve(){

    long long n,minday, maxtemp;
    scanf("%lld %lld %lld", &n,&minday,&maxtemp);
    long long total =0;
    long long num;
    long long count =0;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%lld", &num);
        if(num<=maxtemp){
            count++;
        }else{
            count =0;
        }
        if(count>=minday){
            total+=count-minday+1;
        }

    }
    cout<<total<<endl;
    

}

 int main(){
    long long t;
    scanf("%lld",&t);
    while(t--){
        solve();
    }




}
