#include <bits/stdc++.h>

using namespace std;

string solve()
{
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j = j + 2)
        {
            if (s[i] == s[j])
            {
                return "NO";
            }
        }

        /* code */
    }
    return "YES";
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        cout << solve() << endl;
    }
}