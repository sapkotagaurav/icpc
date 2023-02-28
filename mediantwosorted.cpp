#include <bits/stdc++.h>

using namespace std;

double median(vector<int> &nums1, vector<int> &nums2)
{
    int size1 = nums1.size();
    int size2 = nums2.size();
    int a = 0, b = 0;
    vector<int> ret;
    while (a < size1 && b < size2)
    {
        if (nums1[a] < nums2[b])
        {
            ret.push_back(nums1[a]);
            a++;
        }
        else
        {
            ret.push_back(nums2[b]);
            b++;
        }

        if (a != size1 - 1)
        {
            for (int i = a; i < size1; i++)
            {
                ret.push_back(nums1[i]);
            }
        }
        if (b != size1 - 1)
        {
            for (int i = b; i < size2; i++)
            {
                ret.push_back(nums2[i]);
            }
        }
    }
    int rets = ret.size();
    for (auto &&i : ret)
    {
        cout<<i<<" ";
    }
    return ret[0];
    
}

int main(){
    vector<int> a {1,5,7,9};
    vector<int> b{2,3,6};
    cout<<median(a,b)<<endl;

}