#include <iostream>
#include<string>
#include <map>


using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        map<int,string> m;
        int count = s.size();
        int j =0;
        bool increasing =true;
        for (size_t i = 0; i < count; i++)
        {
                m[j] = m[j] + s[i];
                if (increasing)
                {
                    j++;
                }else{
                    j--;
                }
                if (j==0 || j==numRows-1)
                {
                    increasing = !increasing;
                }
                
                

            
            
        }
        string ret ="";
        for (auto &&i : m)
        {
            ret += i.second;
        }
        return ret;
        
        
    }
};