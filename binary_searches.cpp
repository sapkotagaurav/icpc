#include <bits/stdc++.h>

using namespace std;

int lower_bound(vector<int> a, int x)
{
    int low = 0, high = a.size() - 1, mid, ans = 0;
    if (x > a[high])
        return high + 1;
    if (x < a[0])
        return 0;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (x <= a[mid])
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int upper_bound(vector<int> a, int x)
{
    int low = 0, high = a.size() - 1, mid, ans = a.size();
    if (x > a[high])
        return high + 1;
    if (x < a[0])
        return 0;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (x >= a[mid])
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans+1;
}
int binaryS(vector<int> a, int x)
{
    int low = 0, high = a.size() - 1, mid, ans = -1;
    while (low <= high)
    {
        mid = (high + low) / 2;
        if (x > a[mid])
        {
            low = mid + 1;
        }
        else if (x < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            return ans;
        }
    }
    return ans;
}

int main()
{
    int tc, n, q, temp;
    cin >> tc;
    vector<int> arr;
    for (int i = 0; i < tc; i++)
    {
        cin >> n >> q;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        for (int j = 0; j < q; j++)
        {
            cin >> temp;
            cout << "Lower Bound:" << lower_bound(arr, temp) << endl
                 << "Upper bound:" << upper_bound(arr, temp) << endl
                 << "Binary Search:" << binaryS(arr, temp) << endl;
        }
    }
}