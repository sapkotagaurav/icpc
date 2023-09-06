#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string stack;
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (count > 0 and s[i] == stack[count - 1])
            {
                stack.pop_back();
                count--;
            }
            else
            {
                stack.push_back(s[i]);
                count++;
            }
        }
        return stack;
    }
};

int main()
{
    
    Solution s;
    cout<<s.removeDuplicates("abbaca")<<endl;
}