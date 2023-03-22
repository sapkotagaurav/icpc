// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>

using namespace std;
int main() {
int n_test;
cin>>n_test;
int len_string;
string bin_string;
int x,y;


for(int i=0;i<n_test;++i){
    cin>>len_string;
    cin>>bin_string;
    x=0;
    y= len_string-1;
    while (x<y){
        if(bin_string[x] == bin_string[y]){
            break;
        }else{
            x++;
            y--;
        }
    }
    cout<<y-x+1<<endl;
    
    
    
}
        


    return 0;
}