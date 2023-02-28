#include<bits/stdc++.h>

using namespace std;

int hammingWeight(uint32_t n) {
        
        int count;
        while(n>0){
            if(n%10 == 1){
                count +=1;
            }
        }
        return count;
    }