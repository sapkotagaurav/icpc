#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int binarysearch(vector<int> &nums, int l, int h, int target)
    {
        int low = l, high = h - 1, mid;
        while (low <= high)
        {
            mid = (high + low) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }

    vector<vector<int>> threeSum(vector<int> nums)
    {
        vector<vector<int>> a{};
        sort(nums.begin(), nums.end());
        int lastused = nums[nums.size() - 1] + 1;
        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (lastused != nums[i])
            
            {
                if (nums[i] > 0)
                {
                    break;
                }
                for (int j = i + 1; j < nums.size() - 1; j++)
                {
                    int k = binarysearch(nums, j + 1, nums.size(), 0 - (nums[i] + nums[j]));
                    if (k != -1)
                    {
                        a.push_back(vector<int>{nums[i], nums[j], nums[k]});
                        
                    }
                }
                lastused = nums[i];
            }
        }
        a.erase( unique( a.begin(), a.end() ), a.end() );
        return a;
    }
};

int main()
{
    int t, n;
    cin >> t;
    vector<int> a;
    while (t > 0)
    {
        cin >> n;
        a.push_back(n);
        t--;
    }
    Solution s;

    for (auto &&i : s.threeSum(a))

    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}