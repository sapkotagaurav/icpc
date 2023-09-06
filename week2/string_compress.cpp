#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        char last = chars[0];
        int count = 1;
        auto lastpointer = chars.begin();
        for (auto i = chars.begin() + 1; i <= chars.end(); i++)
        {
            if (*i == last)
            {
                count++;
            }
            else
            {
                if (count == 1)
                {
                    continue;
                }
                chars.erase(lastpointer, i);
                string c = to_string(count);
                for (int j = 0; j < c.size(); j++)
                {
                    chars.insert(i, c[j]);
                    i++;
                }
                lastpointer = i;
            }
            last = *i;
        }

        return chars.size();
    }
};

int main()
{
    Solution s;
    vector<char> a{'a', 'a', 'a', 'b'};
    s.compress(a);
    for (auto &&i : a)
    {
        cout << i << " ";
    }
}