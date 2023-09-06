#include <bits/stdc++.h>

using namespace std;




void solve(){
    long long n,k;
    cin>>n>>k;
    for (int i = 0; i < n/2; i++)
    {
        if((n-2*i)%k ==0){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}