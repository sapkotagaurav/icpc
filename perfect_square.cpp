#define ll long long
#include<bits/stdc++.h>

using namespace std;
bool isPerfectSquare(int num){
    if(num==1) return true;
    int high = num/2,low =0;
    ll mid;
    while(low<=high){
        mid = low +(high-low)/2;
        if (mid*mid<num)
        {
            low = mid +1;
        }else if(mid*mid >num){
            high = mid-1;
        }else{
            return true;
        }
        
    }
    return false;
}

int main(){
    int n =5;
    while (n!=0){
        cin>>n;
        cout<<isPerfectSquare(n)<<endl;
    }

}