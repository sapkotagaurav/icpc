/*
Find the medium number between


*/

#include <bits/stdc++.h>

using namespace std;

int findmedium()
{
    int a, b, c;
    cin>>a>>b>>c;
    int m = max(a, b);
    m = max(m, c);
    int m1 = min(a, b);
    m1 = min(m1, c);
    if (m1 != a and m != a)
    {
        return a;
    }
    if (m1 != b and m != b)
    {
        return b;
    }
    if (m1 != c and m != c)
    {
        return c;
    }
    return 0;
}

int main()
{
    int testcase;
    cin>>testcase;
    for (int i = 0; i < testcase; i++)
    {
        cout<<findmedium()<<endl;
    }
}