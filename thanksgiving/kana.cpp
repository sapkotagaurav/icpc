#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    int a, b, c, d;
    while (t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        d = b * ((a / 10) + 10) + c * (a - 10);
        printf("%d\n", d);
        // if (d <= 0)
        // {
        //     printf("YES");
        // }
        // else
        // {
        //     printf("NO");
        // }
    }
}