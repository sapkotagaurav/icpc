#include <bits/stdc++.h>

using namespace std;

int maf()
{
    int m, n, oneVal;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> oneVal;
            a[i][j] = oneVal;
        }
    }

    int maxi = 0;
    int pointer1, pointer2;
    int sum=0;

    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            pointer1 = i, pointer2 = j;
            sum = a[i][j];
            while (pointer1-1 >= 0&& pointer2-1 >= 0)
            {

                pointer1--;
                pointer2--;
                sum += a[pointer1][pointer2];
            }
            pointer1 = i, pointer2 = j;
            while (pointer1+1 < m && pointer2-1 >= 0)
            {
                pointer1++;
                pointer2--;
                sum += a[pointer1][pointer2];
            }
            pointer1 = i, pointer2 = j;

            while (pointer1+1 < m && pointer2+1 < n)
            {

                pointer1++;
                pointer2++;
                sum += a[pointer1][pointer2];
            }
            pointer1 = i, pointer2 = j;

            while (pointer1-1 >= 0 && pointer2+1 < n)
            {

                pointer1--;
                pointer2++;
                sum += a[pointer1][pointer2];
            }
            maxi = max(sum, maxi);
            
        }
    }
    return maxi;
}

int main()
{

    vector<int> m;
    int testcases;
    cin >> testcases;
    for (size_t i = 0; i < testcases; i++)
    {
        m.push_back(maf());
    }
/**/
    for (size_t i = 0; i < m.size(); i++)
    {
        cout << m[i] << endl;
    }/**/
}