#include <bits/stdc++.h>

using namespace std;

class Solution
{

public:
    int minEatingSpeed(vector<int>& piles, int h)
    {
        int l=1, hi= 1000000000,m;
        while (l<hi)
        {
            m = (l+hi)/2;
            if(canEatAll(piles,m,h)){
                hi=m;
            }else{
                l=m+1;
            }
            
            /* code */
        }
        return l;
        
    }

private:
bool canEatAll(vector<int> &piles, int k, int h){
    int sum =0;
    for (int i = 0; i < piles.size(); i++)
    {
        sum += (piles[i]-1) /k +1;
        if (sum>h)
        {
             return false;
        }
        
    }
    return true;
    
}
};

int main(){
    vector<int> piles {30,11,23,4,20};
    Solution s;
    cout<<s.minEatingSpeed(piles,6)<<endl;
}