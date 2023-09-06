#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    string s1,s2;
    scanf("%c",&c);
    cin >> s1>>s2;
    
    
    map<char, int> m;
    m['6'] = 6;
    m['7'] = 7;
    m['8'] = 8;
    m['9'] = 9;
    m['T'] = 10;
    m['J'] = 11;
    m['Q'] = 12;
    m['K'] = 13;
    m['A'] = 14;

    if (s1[1] == c and s2[1]!=c)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(s1[1] == s2[1] and m[s1[0]] >m[s2[0]]){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
}