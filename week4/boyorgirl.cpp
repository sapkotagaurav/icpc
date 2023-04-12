#include<bits/stdc++.h>

using namespace std; 

int main(){


    string s;
    cin>>s;
    set<char> a;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        a.insert(s[i]);
    }
   string message = a.size() %2 !=0? "IGNORE HIM!" :"CHAT WITH HER!";
   cout<<message<<endl;
    
    
}