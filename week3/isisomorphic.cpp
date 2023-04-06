#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    bool isIsomorphic(string s, string t)
    {
        map<char, char> a;
        int si = s.length();
        for (int i = 0; i < si; i++)
        {
            if (a[s[i]])
            {
                if (a[s[i]] != t[i])
                {
                    return false;
                }
            }
            else
            {
                a[s[i]] = t[i];
            }

            /* code */
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isIsomorphic("egg", "odd") << endl;
    cout << s.isIsomorphic("foo", "bar") << endl;
    cout << s.isIsomorphic("title", "paper") << endl;
}