#include<bits/stdc++.h>

using namespace std;

int mySqrt(int x){
    if(x ==0 || x==1) return x;
    int low =0, high = x/2, mid,min;
    while(low<=high){
        mid =  low +(high-low)/2;
        if (mid*mid > x)
        {
            high = mid -1;
        }else if(mid*mid<x){
            min = mid;
            low = mid+1;
        }else{
            return mid;
        }
        
    }
return min;
}

int main(){
    int x;
    cin>>x;
    cout<<mySqrt(x)<<endl;
}