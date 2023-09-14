#include <bits/stdc++.h>

using name std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
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
