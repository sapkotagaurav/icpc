#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        map<int,string> a;
        int n = names.size();
        for (int i = 0; i < n; i++)
        {
            a[heights[i]] = names[i];
        }

        vector<string> asd(n);
        int count =0;
        for (auto &&i : a)
        {
            asd[count] = i.second;
            count++;

        }
        return asd;
        

        
    }
};

int main()
{

}