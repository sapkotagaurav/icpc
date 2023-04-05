#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a=0, b=0, x=0;
    a = 1;
    n = n - 1;
    x=1;
    bool bob = true;
    while (n > x)
    {
        if (bob)
        {
            b += n >= x+4 ? x + 4 : n-x+1;
        }
        else
        {
            a += n >= x+4 ? x + 4 : n-x+1;
        }
        x = x + 4;
        bob = !bob;
    }
    cout<<a<<" "<<b<<endl;
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