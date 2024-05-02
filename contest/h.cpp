#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] == 'a')
    {
        cout << "YES" << endl;
        return;
    }
    if (s[0] == 'b')
    {
        if (s[1] == 'a')
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (s[0] == 'c')
    {
        if (s[1] == 'b')
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
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
