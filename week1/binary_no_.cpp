#include <bits/stdc++.h>
using namespace std;

int binary(vector<char> arr, int start, int end, int n, int min)
{

    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == '*')
        {
            min = mid;
            return binary(arr, mid + 1, end, n, min);
        }
        else
        {
            return binary(arr, start, mid - 1, n, min);
        }
    }
    return n-min-1;
}

int main()
{
    string s;
    cin >> s;
    vector<char> a;
    for (int i = 0; i < s.size(); i++)
    {
        a.push_back(s[i]);
    }
    cout<<binary(a,0,a.size()-1,a.size(),0)<<endl;
}