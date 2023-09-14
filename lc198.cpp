#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int helper(vector<int> &nums, int i){
        if (i==nums.size()-1)
        {
            return nums[i];
        }
        return max(nums[i]+helper(nums,i+2),helper(nums,i+1));
        
    }
    int rob(vector<int>& nums) {
        return helper(nums,0);
        
    }

};

int main(){
    Solution s;
    vector<int> a ={2,7,9,3,1};
    cout<<s.rob(a)<<endl;
}