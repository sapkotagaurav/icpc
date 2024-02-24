#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    int n;
    scanf("%d",&n);
    
    string s;
    cin>>s;
    int a,b;
    if(n==1){
        if(s=="W"){
            cout<<0<<endl;
            return;
        }
        cout<<1<<endl;
        return;
    }
    if(s[0]=='B' && s[n-1]=='B'){
        cout<<n<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i]== 'B'){
            a = i;
            break;
        }
    }
    for (int i = n-1; i >=0; i--)
    {
        if(s[i]== 'B'){
            b = i;
            break;
        }
    }
    cout<<b-a+1<<endl;
    
    
 
 }

 int main(){
    int t;
    scanf("%d", &t);
    while (t--) solve();




}