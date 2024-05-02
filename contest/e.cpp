#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    map<int,int> m;
    cin>>n;
    while (n--)
    {
        cin>>s;
        m[s]++;
    }
    int ret = m[4] + m[3] + m[2] / 2;

    m[1] = m[1]- m[3];

    if (m[2] % 2 == 1)
    {
        ret++;
        m[1] -= 2;
    }
    if (m[1] > 0)
    {
        ret += (m[1] + 3) / 4;
    }
    cout<<ret<<endl;
}