#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    int n;
    scanf("%d", &n);
    
    vector<int> vec(n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
    }
    int min = vec[0];
    int count =0;
    for (size_t i = 1; i < n; i++)
    {
        count += (vec[i]-1 ) / (2*min-1 );
    }
    
    printf("%d\n",count);
    
    
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
    





}