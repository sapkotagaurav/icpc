#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int cl =0, cr = 0;
    bool ishit = false;
    int asd;
    for (int i = 0; i < n; i++)
    {
        cin>>asd;
        if(!ishit){
            if(asd<=k){
                cl++;
            }else{
                ishit = true;
            }
            
        }else{
            if(asd<=k){
                cr++;
            }else{
                cr=0;
            }
        }
    }
    cout<<cl+cr<<endl;

    
}