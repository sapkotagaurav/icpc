#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        sort(tokens.begin(), tokens.end());
        int p1 = 0, p2 = tokens.size() - 1;
        int score = 0,
        high_sc0re = 0;
        while (p1 <= p2)
        {
            if (tokens[p1] <= power)
            {
                power = power - tokens[p1];
                p1++;
                score++;
                high_sc0re = max(high_sc0re, score);
            }
            else
            {
                if (score >= 1)
                {
                    power = power + tokens[p2];
                    p2--;
                    score--;
                    high_sc0re = max(high_sc0re, score);
                }
                else
                {
                    break;
                }
            }
        }
        return high_sc0re;
    }
};

int main()
{

    vector<int> tokens = {100, 200, 300, 400};
    int p = 200;
    Solution s;
    cout<<s.bagOfTokensScore(tokens,p)<<endl;
}


