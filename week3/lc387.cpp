#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> a;
        for (auto &&i : s)
        {
            if (a.find(i) ==a.end())
            {
                a[i] =1;
            }else{
                a[i]++;
            }
            

            
        }
        for (int i=0;i<s.size();i++)
        {
            if(a[s[i]] ==1){
                return i;
            }
        }
        
        
        
    }
};

int main(){

}