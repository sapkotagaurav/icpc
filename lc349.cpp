#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>a;
        vector<int> ans;
        for(int i = 0; i<nums1.size();i++){
            a[nums1[i]] = i;
        }

        for(int i =0; i<nums2.size(); i++){
            if(a.find(nums2[i])!=a.end()){
                ans.push_back(nums2[i]);
            }
        }
            return ans;

    }
};

int main(){
    Solution s;
    vector<int> nums1 {4,9,5};
    vector<int> nums2 {9,4,9,8,4};
    vector<int> ans = s.intersection(nums1,nums2);
    for (auto &&i : ans)
    {
        cout<<i<<" ";
    }
    
}