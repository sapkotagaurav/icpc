#include<bits/stdc++.h> 

 using namespace std; 

 int main(){

 string s;
 cin>>s;
 map<char,int> m;
 for(int i=0;i<s.size();i++){
    if(s[i] != '+'){
        m[s[i]]++;
    }

 }
 string ret ="";
 for (size_t i = 0; i < m['1']; i++)
 {
    ret = ret + "1+";
 }
  for (size_t i = 0; i < m['2']; i++)
 {
    ret = ret + "2+";
 }
  for (size_t i = 0; i < m['3']; i++)
 {
    ret = ret + "3+";
 }
 
 cout<<ret.substr(0, ret.size() - 1)<<endl;

}
