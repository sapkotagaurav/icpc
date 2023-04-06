#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    int a = 0, b = 0;
    bool turnalice = true;
    while (n > 0)
    {
        if (turnalice)
        {
            if (a == 0)
            {
                a += 1;
                n--;
            }
            else
            {
                if (n > 2 * a + 8)
                {
                    n -= (2 * a + 8);
                    a = 2 * a + 8;
                }
                else
                {
                    a += n;
                    n = 0;
                }
            }
        }
        else
        {
            if (b == 0)
            {
                if (n >= 5)
                {
                    b += 5;
                    n -= 5;
                }
                else
                {
                    b += n;
                    n = 0;
                }
            }
            else
            {
                if (n > 2 * b + 8)
                {
                    n -= (2 * b + 8);
                    b = 2 * b + 8;
                }
                else
                {
                    b += n;
                    n = 0;
                }
            }
        }
        turnalice = !turnalice;
    }
    printf("%d %d\n", a, b);
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