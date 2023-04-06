#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    scanf("%d", &n);
    string m;
    cin >> m;
    string meow = "meow";
    int pointer = 0;
    if (m.size()<4)
    {
        cout<<"NO"<<endl;
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (pointer != 3 and i!=0 and (m[i] == meow[pointer + 1] or tolower(m[i]) == meow[pointer + 1]))
        {
            pointer++;
            continue;
        }
        if (m[i] == meow[pointer] or tolower(m[i]) == meow[pointer])
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (pointer ==3)
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    
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