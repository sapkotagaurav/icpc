#include<bits/stdc++.h>

using namespace std;

int findSingle(int N, int arr[]){
    map<int,int> coup;
    int ans;
    for (int i = 0; i < N; i++)
    {
        if(coup.count(arr[i])==0){
            coup[arr[i]] =1;
            ans =arr[i];
        }else{
            continue;

        }

    }
    
}