#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    int n;
    scanf("%d", &n);
    vector<int> vec(n);

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&vec[i]);
    }
    bool conti = false;
    int count =0;
    for (size_t i = 0; i < n; i++)
    {
        if(vec[i]){
            conti= true;
        }else if (conti){
            count++;
            conti = false;
        }
        if(count>=2) break;
        
    }
    count += conti;
    if(count>=2){
        count = 2;

    }
    printf("%d\n", count);
    

    
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    solve();
    




}