#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        map<int, int> a;
        map<int, int> b;
        vector<int> c;
        int temp = 0;
        for (auto &&i : nums)
        {
            a[i]++;
        }
        for (auto &&i : a)
        {
            b[i.first] = temp;
            temp = temp + i.second;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            c.push_back(b[nums[i]]);
        }
        return c;
    }
};

int main()
{
}