#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<double> ret;
        double siz1 = nums1.size();
        double siz2 = nums2.size();
        double i = 0, j = 0;
        double x;
        while (i < siz1 && j < siz2)
        {
            if (nums1[i] < nums2[j])
            {
                x = nums1[i];
                i++;
            }
            else
            {
                x = nums2[j];
                j++;
            }
            ret.push_back(x);
        }

        for (size_t k = j; k < siz2; k++)
        {
            ret.push_back(nums2[k]);
        }

        for (size_t k = i; k < siz1; k++)
        {
            ret.push_back(nums1[k]);
        }
        cout << i << " " << j << " " << siz1 << "  " << siz2 << endl;
        for (auto &&l : ret)
        {
            cout << l << " ";
        }
        cout << endl;

        double med;
        int siz = siz1 + siz2;

        if (siz % 2 == 0)
        {
            med = (ret[siz / 2 - 1] + ret[siz / 2])/2;
        }
        else
        {
            med = ret[siz / 2];
        }
        return med;
    }
};

int main()
{

    vector<int> vec1 = {1, 2, 5, 7};
    vector<int> vec2 = {3, 4};
    Solution s;
    cout << s.findMedianSortedArrays(vec1, vec2) << endl;
}