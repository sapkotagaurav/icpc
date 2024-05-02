#include<bits/stdc++.h>

using namespace std;

int howmanytwo(int n, map<int,int> &memo){
    int c =0;
    while(n%2!=0){
        if(memo[n]){
            return c+memo[n];
        }else{
            memo[n]=c;
        }
        n=n/2;
        c++;
    }
    return c;
}

int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    int x;
    map<int,int> memo;
    int tot2=0;
    for(int i=0;i<n;i++){
        scanf("%d", &x);
        tot2 += howmanytwo(x,memo);
        if(tot2>=k){
            cout<<1<<endl;
            return 0;
        }

        


    }
    cout<<(tot2>=k)<<endl;

}