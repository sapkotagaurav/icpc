#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    char d;
    cin >> n >> d;
    string s;
    cin >> s;
    string ret = "";
    bool inserted = false;
    for (int i = 0; i < n; i++)
    {
        
        if (!inserted)
        {

            if (s[i] < d)
            {
                inserted = true;
                cout<< d;
            }
        }
        cout<< s[i];
    }
    if (!inserted)
    {
        /*  */
        cout<<d;
    }
    
    cout<<endl;
    
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