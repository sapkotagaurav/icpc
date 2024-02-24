#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n, m;
    scanf("%d %d", &n, &m);
    if (n == 0)
    {
        printf("%d\n", 0);
        return;
    }
    vector<bool> vec(n, false);
    int x, y;
    for (size_t i = 0; i < m; i++)
    {
        scanf("%d %d", &x, &y);
        vec[y - 1] = true;
    }
    int c = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (!vec[i])
        {
            c++;
        }
    }
    if (c == 0)
        printf("%d\n", c + 1);
    else
        printf("%d\n", c);
}

int main()
{

    int t;
    scanf("%d", &t);
    while (t--)
        solve();
}