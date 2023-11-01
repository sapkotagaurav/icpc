#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        int ss = s.size();
        stack<char> a;
        for (int i = 0; i < ss; i++)
        {
            if (s[i] == '(' or s[i] == '[' or s[i] == '{')
            {
                a.push(s[i]);
            }
            else if (a.empty())
            {
                return false;
            }
            else
            {
                switch (a.top())
                {
                case '(':
                {
                    if (s[i] != ')')
                    {
                        return false;
                    }
                    a.pop();
                }
                break;
                case '[':
                {
                    if (s[i] != ']')
                    {
                        return false;
                    }
                    a.pop();
                }
                break;
                case '{':
                {
                    if (s[i] != '}')
                    {
                        return false;
                    }
                    a.pop();
                }
                break;

                default:
                    break;
                }
            }
        }
        return a.empty();
    }
};

int main()
{
}