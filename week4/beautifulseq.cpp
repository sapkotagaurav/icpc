#include <bits/stdc++.h>

using namespace std;


void solve()
{
    int n;
    cin>>n;
    string found = "NO";
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin>>a;
        if(i>=a){
            found = "YES";
        }
    }
    cout<<found<<endl;
    
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}