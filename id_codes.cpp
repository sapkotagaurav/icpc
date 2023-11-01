#include <bits/stdc++.h>

using namespace std;

void sortthem(string &s, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        for (int j = i; j < end; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
}

void solve(string s)
{
    // sortthem(s,5,10);
    // cout<<s<<endl;

    for (int i = s.size() - 1; i > 0; i--)
    {
        if (s[i] > s[i - 1])
        {
            char smallest = 'z';
            int small_idx = s.size() + 10;
            for (int j = i; j < s.size(); j++)
            {
                if (s[j] < smallest)
                {
                    smallest = s[j];
                    small_idx = j;
                }
            }
            char temp = s[i - 1];
            s[i - 1] = smallest;
            s[small_idx] = temp;
            sort(s.begin()+ i, s.end());
            cout << s << endl;
            return;
        }
    }
    cout << "No Successor" << endl;
}

int main()
{
    string s;

    while (1 < 2)
    {
        cin >> s;
        if (s == "#")
            break;
        solve(s);
    }
}