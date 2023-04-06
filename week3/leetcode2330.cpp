#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long bs(vector<long long> &p, long long s, long long m){
        long long size = p.size();
        long long hi = size-1, l =0,mid,ans;
        while (l<=hi)
        {
            mid = l+(hi-l)/2;
            if(p[mid]*m >=s){
                hi = mid-1;
            }else{
                ans = mid;
                l = mid+1;
            }
        }
        return size - ans-1;
        
        
    }
    vector<long long> successfulPairs(vector<long long>& spells, vector<long long>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<long long> ans(spells.size());
        for (long long i = 0; i < spells.size(); i++)
        {
            ans[i] = bs(potions,success,spells[i]);
        }
        
        return ans;
        
    }
};

int main(){
    Solution s;
    vector<long long>spells{5,1,3};
    vector<long long>potions{1,2,3,4,5};
    vector<long long> m = s.successfulPairs(spells,potions,7);
    for (auto &&i : m)
    {
        cout<<i<<" ";
    }
    
}