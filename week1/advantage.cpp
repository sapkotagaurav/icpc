/*

There are n participants in a competition, participant i having a strength of si

.

Every participant wonders how much of an advantage they have over the other best participant. In other words, each participant i
wants to know the difference between si and sj, where j is the strongest participant in the competition, not counting i

(a difference can be negative).

So, they ask you for your help! For each i
(1≤i≤n) output the difference between si and the maximum strength of any participant other than participant i

.
Input

The input consists of multiple test cases. The first line contains an integer t
(1≤t≤1000

) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains an integer n
(2≤n≤2⋅105

) — the length of the array.

The following line contains n
space-separated positive integers s1, s2, ..., sn (1≤si≤109

) — the strengths of the participants.

It is guaranteed that the sum of n
over all test cases does not exceed 2⋅105

.
Output

For each test case, output n
space-separated integers. For each i (1≤i≤n) output the difference between si and the maximum strength of any other participant.
*/

#include <bits/stdc++.h>

using namespace std;

void strength()
{
    int max, second_max, len, a;
    scanf("%d", &len);
    max = 0;
    second_max = 0;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> a;
        arr[i] = a;
        if (a > max)
        {
            second_max = max;
            max = a;
        }
        else
        {
            if (a > second_max)
            {
                second_max = a;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < max)
        {
            cout << arr[i] - max << " ";
        }
        else
        {
            cout << arr[i] - second_max << " ";
        }
    }
    cout << endl;
}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        strength();
    }
}