#include<bits/stdc++.h>

 using namespace std; 

void solve(){
    int n;
    scanf("%d",&n);
    string a,b;
    cin>>a>>b;
    int toadd=0,toremove=0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] !=b[i])
        {
            if(a[i] =='0') toadd++;
            else toremove++;
        }
        
    }
    cout<<max(toadd,toremove)<<endl;
    


}
 int main(){
    int t;
    scanf("%d", &t);
    while(t--) solve();




}