#include<bits/stdc++.h> 

 using namespace std; 

 int main(){

 int n,m;
 cin>>n>>m;
 int l=0;
 int r =n-1;
 vector<int> v(m);
 for (size_t i = 0; i < m; i++)
 {
    cin>>v[i];
 }
 sort(v.begin(),v.end());
 int lowest = INT_MAX;
 while (r<m)
 {
    int diff = v[r] -v[l];
    lowest = min(lowest,diff);
    r++;
    l++;
 }
 cout<<lowest<<endl;
 
 


}
