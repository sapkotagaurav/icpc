#include<bits/stdc++.h>

using namespace std; 

int main(){

int n,k;
scanf("%d %d",&n,&k);
int  l = (240-k);
int sum =0;
for (size_t i = 1; i < 11; i++)
{
    sum += 5*i;
    if(sum>l or i>n){
        cout<<i-1<<endl;
        break;
    }
    
}




}