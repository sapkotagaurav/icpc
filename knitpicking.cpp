#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int t;
    scanf("%d", &t);
   map<string,array<int,3>> m;
   string a,b;
   int c;
   int temp;
    while(t--){
        cin>>a>>b>>c;
        if(b=="any"){
            m[a][0] += c;
        }
        if(b=="left"){
            m[a][1] += c;
        }
        if(b=="right"){
            m[a][2] += c;
        }

    }
    int p =0, any=0;
    bool imp = true;
    for (auto &&i : m)
    {
        if(!((i.second[0] ==1 and i.second[1]==0 and i.second[2]==0) or (i.second[0] ==0 and i.second[2]==0) or (i.second[1] ==0 and i.second[0]==0))){
            imp = false;
        }
        
    }
    
if(!imp){
    for (auto &&i : m)
    {
        
        p+= max<int>(1,max<int>(i.second[1],i.second[2]));
        

        
    }
    cout<<p+any+1<<endl;
}else{
    cout<<"impossible"<<endl;
}
    




}