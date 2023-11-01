#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a, b, c;
    cin >> n;

    cin >> a >> b >> c;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] == b[i]) or (a[i] == c[i]))
        {
            cout << a[i];
        }
        else
        {
            cout << b[i];
        }
    }
    cout << endl;
}