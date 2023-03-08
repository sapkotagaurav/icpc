#include <bits/stdc++.h>

using namespace std;

int compress(vector<char> &chars)
{
    char lastchar = chars[0];
    int count = 0;
    int pointer = 0;
    int s = chars.size();
    if (s == 1)
    {
        return 1;
    }
    int anothercount=0;

    for (int i = 0; i < s; i = i)
    {
        if (lastchar == chars[i])
        {
            count++;
            chars.erase(chars.begin() + i);
            i++;
        }
        else
        {
            if (count == 1)
            {
                i++;
                anothercount++;
                continue;
            }
            else
            {
                chars.insert(chars.begin() + anothercount, lastchar);
                i++;
                anothercount++;
                string s = to_string(count);
                for (int j = 0; i < s.size(); j++)
                {
                    chars.insert(chars.begin() + i, s[i]);
                    i++;
                    anothercount++;
                }
            }

            count = 0;
        }
        lastchar = chars[i];
    }
    return count;
}

int main()
{
    int t;
    scanf("%d", &t);
    vector<char> a(t);
    int f = 0;
    while (f < t)
    {
        cin >> a[f];
        f++;
    }
    cout << compress(a) << endl;
    for (auto &&i : a)
    {
        cout << i << " ";
    }
}