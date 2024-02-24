#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int x;
    int mi = INT_MAX;
    int arr[n];
    priority_queue<int> pq;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &x);
        pq.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = pq.top();
        pq.pop();
    }
    for (int i = 0; i < n; i++)
    {
        if (i + (m-1) < n)
            mi = min(mi, arr[i] - arr[i + m-1]);
        else
            break;
    }
    printf("%d\n", mi);
}