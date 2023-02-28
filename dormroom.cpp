#include <bits/stdc++.h>

using namespace std;

int binarySearch(const std::vector<int> &vec, int target) {
    int left = 0;
    int right = vec.size() - 1;
    int result = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] < target) {
            result = mid + 1;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main()
{
    int shop, days;
    int num;
    cin >> shop;
    vector<int> shop_prices;
    vector<int> days_coin;
    for (int i = 0; i < shop; i++)
    {
        cin >> num;
        shop_prices.push_back(num);
    }
    cin >> days;

    sort(shop_prices.begin(), shop_prices.end());
    
    


    for (int i = 0; i < days; i++)
    {
        cin >> num;
        days_coin.push_back(num);
        /// cout<<binary_s(shop_prices,num,shop)<<endl;
    }

    for (int i = 0; i < days; i++)
    {
        cout << binarySearch(shop_prices, days_coin[i]) << endl;
    }
}
