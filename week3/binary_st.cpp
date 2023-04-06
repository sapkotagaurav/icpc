#include <bits/stdc++.h>

using namespace std;

void swap(vector<int> &nums, int i, int j)
{
    int temp;
    temp = nums[j];
    nums[j] = nums[i];
    nums[i] = temp;
}

void inplace_partition(vector<int> &nums)
{
    int i = 0, j = nums.size() - 1;
    while (i < j)
    {
        if (nums[i] < 0)
        {
            if (nums[j] > 0)
            {
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        else
        {
            if (nums[j] > 0)
            {

                j--;
            }
            else
            {
                swap(nums, i, j);
            }
        }
    }
}

int main()
{
    vector<int> arr{-1, 3, -2, 4, -2, -2, 4, -5, 6, 6, 7, -1};
    inplace_partition(arr);
    for (auto &&i : arr)
    {
        cout << i << " ";
    }
}
