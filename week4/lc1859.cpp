#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string sortSentence(string s)
    {
        string r[9];
        int count =1;
        string temp = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isdigit(s[i]))
            {
                r[s[i] - '0' - 1] = temp;
            }
            else if (isspace(s[i]))
            {
                temp = "";
                count++;
            }
            else
            {
                temp += s[i];
            }
        }
        temp = "";

        int ss = count;
        for (int i = 0; i < ss; i++)
        {

            temp = i != ss - 1 ? temp + r[i] + " " : temp + r[i];
        }
        return temp;
    }
};
int main()
{
    Solution s;
    cout << s.sortSentence("is2 sentence4 This1 a3") << endl;
}