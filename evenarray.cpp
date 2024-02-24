#include<bits/stdc++.h>

 using namespace std; 
 bool iseven(int &x){
    return x%2==0;
 }

 int main(){
    int t;
    scanf("%d", &t);
    int n;
    int x;
    
    while (t--)
    {
        int ll=0;
        int temp =0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if(!(iseven(i) == iseven(x))){
                if(iseven(i)){
                    temp++;
                }else{
                    temp--;
                }
                ll++;

            }


        }
        if(temp==0){
            printf("%d\n", ll/2);
        }else{
            printf("%d\n", -1);

        }
        
        
        
    }
    





}