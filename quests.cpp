#include<bits/stdc++.h>

 using namespace std; 
 #define inp(type,variable) scanf("%" #type, &variable)
 void solve(){
    int n, k;
    inp(d,n);
    inp(d,k);
    vector<int> vec1(n);
    vector<int> vec2(n);
    vector<int> vec3(n);
    vector<int> vec4(n);
    int high1=0,high2=0;
    for (int i = 0; i < n; i++)
    {
        inp(d,vec1[i]);
        if(i==0) {vec2[i] = vec1[i];}
         else
          {vec2[i] = vec1[i]+vec2[i-1];}


    }
    
    for (int i = 0; i < n; i++)
    {
        inp(d,vec3[i]);
        // if(high1<vec3[i]) high1 = vec3[i];
        // vec4[i]=vec2[i]+(k-i-1)*high1;
        // if(high2<vec4[i]) high2=vec4[i];


    }
    for (size_t i = 0; i < min(n,k); i++)
    {
       if(high1<vec3[i]) high1 = vec3[i];
         vec4[i]=vec2[i]+(k-i-1)*high1;
         if(high2<vec4[i]) high2=vec4[i];
    }
    
    
    
    printf("%d\n",high2);
    
 
 }

 int main(){
    int t;
    inp(d,t);
    while(t--)solve();





}