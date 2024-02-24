#include <bits/stdc++.h>

using namespace std;
void solve()
{
    long long n;
    scanf("%lld", &n);
    long long ma = 0;
    long long res = 0;
    long long x;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        res = res + x;
    }
    for (size_t i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        ma = x>ma?x:ma;
        res = res + x;
    }
    res = res - ma;
    printf("%lld\n", res);
}

int main()
{
    long long t;
    scanf("%lld", &t);
    while (t--)
        solve();
}