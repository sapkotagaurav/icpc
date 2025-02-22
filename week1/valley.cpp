/*

You are given an array a[0…n−1] of n integers. This array is called a "valley" if there exists exactly one subarray a[l…r]

such that:

    0≤l≤r≤n−1

,
al=al+1=al+2=⋯=ar
,
l=0
or al−1>al
,
r=n−1
or ar<ar+1

    .

Here are three examples:

The first image shows the array [3,2,2,1,2,2,3
], it is a valley because only subarray with indices l=r=3

satisfies the condition.

The second image shows the array [1,1,1,2,3,3,4,5,6,6,6
], it is a valley because only subarray with indices l=0,r=2

satisfies the codition.

The third image shows the array [1,2,3,4,3,2,1
], it is not a valley because two subarrays l=r=0 and l=r=6

that satisfy the condition.

You are asked whether the given array is a valley or not.

Note that we consider the array to be indexed from 0

.
Input

The first line contains a single integer t
(1≤t≤104

) — the number of test cases.

The first line of each test case contains a single integer n
(1≤n≤2⋅105

) — the length of the array.

The second line of each test case contains n
integers ai (1≤ai≤109

) — the elements of the array.

It is guaranteed that the sum of n
over all test cases is smaller than 2⋅105

.
Output

For each test case, output "YES" (without quotes) if the array is a valley, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
*/

#include <bits/stdc++.h>

using namespace std;

void isValley()
{
    int len;
    int count = 0;
    cin >> len;
    vector<int> arr;
    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        if (i == 0 or a != arr.back())
        {
            arr.push_back(a);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if ((i == 0 || arr[i - 1] > arr[i]) && (i == arr.size() - 1 || arr[i] < arr[i + 1]))
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        isValley();
    }
}