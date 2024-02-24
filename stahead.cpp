#include<bits/stdc++.h>

 using namespace std; 


 int main(){
    map<string,int> m;
    int a,b;
    scanf("%d %d",&a,&b);
    string s;
    for (size_t i = 0; i < a; i++)
    {
        cin>>s;
        m[s] =i+1;
    }
    string s1,s2;
    for (size_t i = 0; i < b; i++)
    {
        cin>>s1>>s2;
        cout<<abs(m[s2] - m[s1]) -1 <<endl;
    }
    
    





}