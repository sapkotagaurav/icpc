#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int n, total=0, total2=0,x;
    scanf("%d", &n);
    vector<int> vec(n);
    for (size_t i = 0; i < n; i++)
    {
       scanf("%d", &x);
       total += x;
       vec[i]=x;
    }
    sort(vec.begin(), vec.end());
    for (int i = n-1; i >= 0; i--)
    {
        total2+=vec[i];
        if(total2>total/2){
            cout<<n-i<<endl;break;

        }
       
    }
    
    




}