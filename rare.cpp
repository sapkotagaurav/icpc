#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<string> v;
    map<char,vector<string>> m;
    cin>>s;
    while (s != "#")
    {
        m[s[0]].push_back(s);
        cin>>s;

    }
    for (auto &&i : m)
    {
        
    }
    
    
}