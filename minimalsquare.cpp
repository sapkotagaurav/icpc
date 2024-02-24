#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int t;
    scanf("%d", &t);
    int x,y,a;

    while(t--){
        scanf("%d %d", &x, &y);
        if(x>y){
            if(2*y>x){
                printf("%d\n",4*y*y);
            }else{
                printf("%d\n",x*x);

            }
        }else{
            if(2*x>y){
                printf("%d\n",4*x*x);
            }else{
                printf("%d\n",y*y);

            }
        }
        
        
    }




}