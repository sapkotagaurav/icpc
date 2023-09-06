#include<bits/stdc++.h>

 using namespace std; 

 void permute(string s, int i, int j, set<string> &a){
    if(i == j){
        a.insert(s);
    }else{
        for (int x = i; x <=j; x++)
        {
            swap(s[x],s[i]);
            permute(s,i+1,j,a);
            swap(s[x],s[i]);
        }
        
    }

 }

 
void solve(string s){
    set<string> a;
    permute(s,0,s.size()-1, a);
    //sort(a.begin(),a.end());
    for (auto &&i : a)
    {
        cout<<i<<endl;
        
    }
    

    

 
 }

 int main(){
    int n;
    string s;
    scanf("%d",&n);
    while(n--){
        cin>>s;
        solve(s);
        
    }




}