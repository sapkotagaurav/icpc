#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b1, g1, c1, b2, c2, g2, b3, c3, g3, a, minm = INT_MAX;
    string abc;
    while (scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) != EOF)
    {
        a = 0;
        minm = INT_MAX;
        abc = "";

        /////////////////////////////////////////////////////////////////
        a = g2 + g3 + c1 + c3 + b1 + b2;
        minm = min(a, minm);
        if (a <= minm)
        {
            minm = a;
            abc = "GCB";
        }

        a = g2 + g3 + b1 + b3 + c1 + c2;
        minm = min(a, minm);
        if (a <= minm)
        {
            minm = a;
            abc = "GBC";
        }

        a = c2 + c3 + g1 + g3 + b1 + b2;
        minm = min(a, minm);
        if (a <= minm)
        {
            minm = a;
            abc = "CGB";
        }

        a = c2 + c3 + b1 + b3 + g1 + g2;
        minm = min(a, minm);
        if (a <= minm)
        {
            minm = a;
            abc = "CBG";
        }

        a = b2 + b3 + g1 + g3 + c1 + c2;
        minm = min(a, minm);
        if (a <= minm)
        {
            minm = a;
            abc = "BGC";
        }

        a = b2 + b3 + c1 + c3 + g1 + g2;
        if (a <= minm)
        {
            minm = a;
            abc = "BCG";
        }

        cout << abc << " " << minm << endl;
    }
}