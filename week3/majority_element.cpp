#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> a;
        for (int i = 0; i < n; i++)
        {
            a[nums[i]]++;
            if (a[nums[i]] > floor(n / 2))
            {
                return nums[i];
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> a{2,2,1,1,1,2,2,3,2};
    cout << s.majorityElement(a) << endl;
}