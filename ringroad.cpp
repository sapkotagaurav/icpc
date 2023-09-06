#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    long long n,m, x;
    cin>>n>>m;
    long long prev =1;
    long long total =0;
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        if(x<prev){
            total+=(n-prev)+1+x-1;

        }else if(x>prev){
            total+=x-prev;

        }
        prev=x;
        
    }
    cout<<total<<endl;




}