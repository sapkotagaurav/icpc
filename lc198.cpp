#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int r1=0;
        int r2 =0;
        for (int i = 0; i < nums.size(); i++)
        {
           int temp = max(nums[i]+r1,r2);
           r1=r2;
           r2=temp;
        }
        return r2;
        
    }

};

int main(){
    Solution s;
    vector<int> a ={2,7,9,3,1};
    cout<<s.rob(a)<<endl;
}