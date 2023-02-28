#define ll long long
#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<ll> a, int s, int e, int x)
{
    if (s == e)
    {
        return a[s] <= x ? s : -1;
    }
    int mid = s + (e - s) / 2;
    if (x <= a[mid])
    {
        return binarySearch(a, s, mid, x);
    }
    int retu = binarySearch(a, mid + 1, e, x);
    return retu == -1 ? mid : retu;
}

int main()
{
    int numRooms, numLetters;
    cin >> numRooms >> numLetters;
    ll temp;
    ll temp2 = 0;
    vector<ll> numberofRooms(numRooms);
    vector<pair<ll, ll>> ret(numLetters);
    for (int i = 0; i < numRooms; i++)
    {
        cin >> temp;
        temp2 += temp;
        numberofRooms[i] = temp2;
    }
    int pointer = 0;
    ll temp3;
    int temp4;
    for (int i = 0; i < numLetters; i++)
    {
        cin >> temp;
        temp4 = binarySearch(numberofRooms, 0, numRooms, temp);
        temp3 = temp - numberofRooms[temp4];
        cout << "here:" << temp4 << " " << temp << " " << temp3 << endl;

        if (temp4 == -1)
        {
            ret[i] = make_pair(1, temp);
        }
        // else if (temp3 == 0)
        // {
        //     ret[i] = make_pair(temp4 + 1, numberofRooms[numRooms - 1] - numberofRooms[numRooms - 2]);
        // }
        else
        {
            ret[i] = make_pair(temp4 + 2, temp3);
        }
    }
    for (int i = 0; i < numLetters; i++)
    {
        cout << ret[i].first << " " << ret[i].second << endl;
    }
    {
        /* code */
    }
}
