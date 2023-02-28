#include <bits/stdc++.h>

using namespace std;

int a()
{

    vector<string> strings;
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++)
    {
        string ams;
        cin >> ams;
        strings.push_back(ams);
    }

    
    int sum = 0;
    int minVal = INT_MAX;
    for (int i = 0; i < x; i++)
    {
        
        for (int j = i+1; j < x; j++)
        {
            int val1 = 0;
            for (int k = 0; k < y; k++)
            {
                val1+=abs(strings[i][k] - strings[j][k]);
            }
            minVal = min(minVal,val1);
        }
    }
    
    return minVal;
}

int main()
{
    int testcases;
    cin >> testcases;
    vector<int> ret;
    for (int i = 0; i < testcases; i++)
    {
        ret.push_back(a());
    }
    for (int i = 0; i < ret.size(); i++)
    {
        cout<<ret[i]<<endl;
    }
    return 0;
    
}

