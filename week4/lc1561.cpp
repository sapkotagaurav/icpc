#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxCoins(vector<int> &piles)
    {
        sort(piles.begin(), piles.end());
        int i =1,j= piles.size()-1 ,k=(j+1)/3;;
        int sum =0;
        while (k>0)
        {
            sum+=piles[i];
            i+=2;
            k--;
        }
        return sum;
        
    }
};
int main()
{
}