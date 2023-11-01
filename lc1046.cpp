#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq;

        for (auto &&i : stones)
        {
            pq.push(i);
        }
        int c =-742343;
        while (!pq.empty())
        {
            if(c!=-742343){
                pq.push(c);
            }
            

            int a = pq.top();
            pq.pop();
            
            int b = pq.top();
            c = a -b;
        }
        return c;
        
        
    }
};

int main()
{
}