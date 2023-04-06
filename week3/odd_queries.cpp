#include <bits/stdc++.h>
using namespace std;

string ssolve(vector<int> a, vector<int> sum, int n)
{
    int l, r, k, s;
    cin>>l>>r>>k;

    if (l == 1)
    {
        s = (sum[n - 1] - (sum[r - 1] - 0)) + (r - l + 1) * k;
    }
    else
        s = (sum[n - 1] - (sum[r - 1] - sum[l - 1 - 1])) + (r - l + 1) * k;
    return s % 2 == 0 ? "NO" : "YES";
}

void solve()
{
    int n, q;
    scanf("%d %d", &n, &q);
    vector<int> a(n);
    vector<int> sum(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
        sum[i] = i == 0 ? a[i] : sum[i - 1] + a[i];
    }

    while (q--)
    {
        cout << ssolve(a, sum, n) << endl;
    }
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