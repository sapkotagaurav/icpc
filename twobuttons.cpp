#include <bits/stdc++.h>

using namespace std;

int fun(int n, int m){
    cout<<n<<endl;
    if(n<=0){
        return INT_MAX;
    }
    if(m>=n){
        return m-n;
    }else{
        return 1+min(fun(n-1,m),(n*2,m));
    }

}

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    cout<<fun(m,n)<<endl;
}