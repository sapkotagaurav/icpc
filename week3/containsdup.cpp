#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    map<int,int> s;
    int si = nums.size();
    
    
    for (size_t i = 0; i < si; i++)
    {
        
        if(s[nums[i]]){
            int ab = i
            if((i-s[nums[i]])<=k){
                return true;
            }else{
                s[nums[i]] = i+1;
            }
        }else{
            s[nums[i]] = i+1;
        }
        
    }
    return false;
    }
};

int main(){

}