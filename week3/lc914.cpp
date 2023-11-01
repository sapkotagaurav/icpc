#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    
    int findGCD(vector<int> &arr, int n)
    {
        int result = arr[0];
        for (int i = 1; i < n; i++)
        {
            result = gcd(arr[i], result);

            if (result == 1)
            {
                return 1;
            }
        }
        return result;
    }
    bool hasGroupsSizeX(vector<int> &deck)
    {
        map<int, int> a;
        int size = deck.size();
        if (size == 1)
            return false;
        for (int i = 0; i < size; i++)
        {
            a[deck[i]]++;
        }
        vector<int> arr;
        for (auto &&i : a)
        {
            arr.push_back(i.second);
        }
        return findGCD(arr,arr.size()) ==1;
        
        
        
        
    }
};