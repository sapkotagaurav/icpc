#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int n;
    scanf("%d", &n);
    int a = n/100;
    int b = a+1;
    int c = a*100 -1;
    int d = b*100 -1;
    int e = n-c;
    int f = d-n;
    if(n<=100){
        cout<<99<<endl;return 0;
    }
    if(e>=f){
        cout<<d<<endl;
    }else
    {
        cout<<c<<endl;
    }
    
    




}