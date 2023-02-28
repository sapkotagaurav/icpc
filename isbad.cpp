#include <bits/stdc++.h>

using namespace std;

    bool isBadVersion(int version)
    {
        if (version<1)
        {
            return false;
        }
        return true;
    }
    int firstBadVersion(int n)
    {
        if(n==1) return 1;
        int high = n, low = 1, mid,min;
        while (low <= high)
        {
            mid = low + (high - low) / 2;
            if (!isBadVersion(mid))
            {
                low = mid +1;
                min =mid;
            }else{
                high = mid-1;
                
            }
            
            
        }
        return min+1;
    }

    int main()
    {
        int bad, n;
        scanf("%d", &n); 
        cout<<firstBadVersion(n)<<endl;
    }


