#include<bits/stdc++.h>

using namespace std;

void solve(){

    long long n,c,d;
    scanf("%lld %lld %lld",&n,&c,&d);
    vector<int> a;
    int max = 0;
    int min = INT16_MAX;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        a.push_back(x);
        if (x<min)
        {
            min =x;
        }
        if (x>max)
        {
            max =x;
        }
        
    }
    if (c/d<min)
    {
        printf("Infinity\n");
    }
    else if(c/d>max){
        printf("Impossible\n");
    }else{
        printf("Karte hai kuch prabandh\n");
    }
    
    
}


int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }

}