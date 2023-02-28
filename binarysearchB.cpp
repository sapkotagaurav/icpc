#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>& a, int e, int val)
{
    int mid;
    int low = 0;
    int high = e - 1;
    int ans = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] <= val)
        {
            low = mid + 1;
            ans = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (ans == a.size())
        return e - 1;
    return ans;
}

int main()
{
    int num_shops;
    cin >> num_shops;
    vector<int> prices_shop(num_shops);
    int temp;
    for (int i = 0; i < num_shops; i++)
    {
        cin >> prices_shop[i];
    }
    sort(prices_shop.begin(), prices_shop.end());
    int num_days;
    cin >> num_days;
    int temp2;
    for (int i = 0; i < num_days; i++)
    {

        cin >> temp2;

        cout << binarySearch(prices_shop, num_shops, temp2) + 1 << endl;
    }
}
