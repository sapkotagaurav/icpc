#include<bits/stdc++.h> 

 using namespace std; 

 int main(){
   int n;
   cin>>n;
   int a=0;
   while(n>0){
    if(n>=100){
        a++;
        n=n-100;
        continue;

    }
    if(n>=20){
        a++;
        n=n-20;
        continue;

    }
    if(n>=10){
        a++;
        n=n-10;
        continue;

    }
    if(n>=5){
        a++;
        n=n-5;
        continue;

    }
    if(n>=1){
        a++;
        n=n-1;
        continue;

    }
   }
   cout<<a<<endl;

 

}
