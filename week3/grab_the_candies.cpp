#include<bits/stdc++.h>

using namespace std;

string solve(){
    int n;
    scanf("%d", &n);
    int odd =0, even=0;
    for (size_t i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        if (a%2 ==0)
        {
            even+=a;
        }else{
            odd+=a;
        }
        
    }
    return odd>=even?"NO":"YES";
    
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        cout<<solve()<<endl;
    }
}