#include <bits/stdc++.h>

using namespace std;

long long binarySearch(int n, int k){
    long long h = pow(10,18);
    long long low =0;
    long long mid;
    while(low<=h){
        mid = low + (h-low)/2;
        if (2*mid>n){
            h = mid-1;
        }else if(2*mid<n){
            low = mid+1;
        }else{
            return mid;
        }


    }
    return -1;
}


void solve(){
    long long n,k;
    cin>>n>>k;
    if(binarySearch(n,k))

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}