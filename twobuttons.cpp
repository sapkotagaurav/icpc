#include <bits/stdc++.h>

using namespace std;

int fun(int n, int m)
{
    queue<pair<int, int>> q;
    q.push(make_pair(m, 0));

    if (n >= m)
    {
        return n - m;
    }

    while (!q.empty())
    {
        pair<int, int> temp = q.front();
        q.pop();
        if (temp.first <= n)
        {
            return ( n-temp.first) + temp.second ;
        }
        else
        {
            

            q.push(make_pair(temp.first + 1, temp.second + 1));
            if (temp.first % 2 == 0)
            {
                
                q.push(make_pair(temp.first / 2, temp.second + 1));
            }
        }
    }

    return 1;
}

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    cout << fun(n, m) << endl;
}