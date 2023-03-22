#include <bits/stdc++.h>

using namespace std;
int sumT(vector<int> &vec, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += vec[i];
    }
    return sum;
}

void solve()
{
    int n;
    scanf("%d", &n);
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        vec[i] = x;
    }

    int max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        bool done = false;
        if (((vec[i] * -1) + (vec[i + 1] * -1)) > (vec[i] + vec[i + 1]))
        {
            vec[i] = vec[i] * -1;
            vec[i + 1] = vec[i + 1] * -1;
            done = true;
        }

        int s = sumT(vec, n);
        if (s > max)
        {
            max = s;
        }
        
    }
    cout << max << endl;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        solve();
    }
}