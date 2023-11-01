#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int n, nummoves=0;
    scanf("%d", &n);
    string a,b;
    cin>>a>>b;
    for (int i = 0; i < n; i++)
    {
        nummoves += min(abs(a[i]-b[i]), abs((10-(a[i]+b[i]))));
        
    }
    cout<<nummoves<<endl;
    
    





}