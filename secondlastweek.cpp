#include <bits/stdc++.h>

using namespace std;

long long solve(int a, int b, map<int, long long> &ma)
{
if(a>b){
        int temp = b;
        b= a; 
        a = temp;

    }
    long long max = 0;
    for (int i = a; i <= b; i++)
    {

        int n = i;
        int count = 1;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }

            if (ma.find(n) != ma.end())
            {
                ma[i] = count + ma[n];
                break;
            }
            else
            {
                count++;
            }
        }
        if (ma[i] > max)
        {
            max = ma[i];
        }
    }
    // for (auto &&i : ma)
    // {
    //     cout<<i.first<<":"<<i.second<<endl;

    // }

    return max;
}

int main()
{

    map<int, long long> ma;
    ma[4] = 3;
    ma[1] = 1;
    ma[2] = 2;
    ma[22] = 16;

    int a,b;

    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d %d %lld\n", a, b, solve(a, b, ma));
    }
}