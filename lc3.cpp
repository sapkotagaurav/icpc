#include <bits/stdc++.h>

<<<<<<< HEAD
using name std;
=======
using namespace std;
>>>>>>> 6d7d8e3d59e857847133fa21145a71c29589187c

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
<<<<<<< HEAD
        int l =0; r =l+1;
        set<char> a;
        map<char,int> ma;
        int strlen =1;
        a.insert(s[l]);
        ma[s[l]] =1;
        while (r<s.size())
        {
            if(strlen < r-l){
                strlen = r-l;
            }
            int tempsiz = a.size();
            a.insert(s[r]);
            if(tempsiz == a.size()){
                l =ma[s[r]];
            }
            ma[s[r]] = r;
            r++;


            
        }
        
    }
};

int main(){
    Solution s;

}
=======
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
>>>>>>> 6d7d8e3d59e857847133fa21145a71c29589187c
