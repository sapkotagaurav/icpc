#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    if (target < nums[0])
        return 0;
    if (target > nums[nums.size() - 1])
        return nums.size();
    int mid, high = nums.size() - 1, low = 0, min;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (target < nums[mid])
        {
            min = mid;
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return min;
}

int main()
{
    vector<int> v(10);
    for (size_t i = 0; i < 10; i++)
    {
        cin >> v[i];
    }
    int t;
    cin >> t;
    cout << searchInsert(v, t);

    return 0;
}