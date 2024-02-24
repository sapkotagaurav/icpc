#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int n;
    scanf("%d", &n);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    int i=0,j=n-1;
    int s=0,d=0;
    bool sjt = true;
    int temp;
    while(j>=i){
        if(v[j] >v[i]){
            temp = v[j];
            j--;
            
            
        }else{
            temp = v[i];
            i++;
        }
        if(sjt){
            s+=temp;
        }else{
            d+=temp;
        }
        sjt=!sjt;        

    }    
    printf("%d %d",s,d);




}