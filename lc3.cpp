#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        string str="";
        int strlen = 0;
        map<char, int> ma;
        for (size_t i = 0; i < s.size(); i++)
        {
                            cout <<i<<" "<< ma[s[i]]<<" "<<s[i]<<" "<<s.substr(ma[s[i]], i-ma[s[i]])<<" "<< str << endl;

            if (ma[s[i]] > 0)
            {
                if(s.substr(ma[s[i]],i-ma[s[i]]).size()>0)
                str = s.substr(ma[s[i]],i-ma[s[i]]) +s[i];
                else
                str = s[i];
                
            }else{
                str = str + s[i];
            }
            
                
        
            ma[s[i]] = i + 1;
            if (str.size() > strlen)
            {
                strlen = str.size();
            }
        }

        return strlen;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
    cout << s.lengthOfLongestSubstring("bbbbb") << endl;
    cout << s.lengthOfLongestSubstring("pwwkew") << endl;
        cout << s.lengthOfLongestSubstring("abba") << endl;

}