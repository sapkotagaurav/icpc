#include <bits/stdc++.h>

using namespace std;

bool outdated(vector<int> &arr1, vector<int> &arr2)
{
    if ((arr1[0] < arr2[0] and arr1[1] < arr2[1] and arr1[2] < arr2[2]))
    {
        return true;
    }
    return false;
}
void swapp(int i, int j, vector<vector<int>> &arr)
{
    vector<int> temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<vector<int>> verified(n);
    int choosenid = 0;
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    vector<int> v1{a, b, c, d, 0, 0};
    verified[0] = v1;
    for (int i = 1; i < n; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        vector<int> temp{a, b, c, d, i, 0};
        verified[i] = (temp);
    }

    int outdatedcount = 0;

    for (int i = 0; i < verified.size(); i++)
    {
        for (int j = i; j < verified.size(); j++)
        {
            if (outdated(verified[i], verified[j]))
            {
                verified[i][5] = 1;
            }
            if (outdated(verified[j], verified[i]))
            {
                verified[j][5] = 1;
            }
        }
    }

    int leastprice = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (verified[i][5] != 1)
        {
            if (verified[i][3] < leastprice)
            {
                leastprice = verified[i][3];
                choosenid = i;
            }
        }
    }

    cout<<choosenid+1<<endl;
}