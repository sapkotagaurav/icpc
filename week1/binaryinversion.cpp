#include <bits/stdc++.h>
using namespace std;

long long c(vector<long long> arr)
{
    long long count = 0;
    map<long long,long long> m;

    for (long long i = arr.size()-1; i >=0; i--)
    {
        if (arr[i] == 0)
        {
            m.insert(pair<long long,long long>(i,-1));
            count++;
    }else{
                    m.insert(pair<long long,long long>(i,count));

    }
    }
    long long c=0;
    for (long long i = arr.size()-1; i >=0; i--)
    {
    if (m[i] != -1)
    {
        c += m[i];
    }
    
    }
    return c;
}
long long add1(vector<long long> arr)
{
    for (long long i = 0; i < arr.size(); i++)
    {
        if (arr[i] ==0)
        {
            arr[i] =1;
            return c(arr);
        }
    }
    return c(arr);
}
long long add0(vector<long long> arr)
{
    for (long long i = arr.size()-1; i >=0; i--)
    {
        if (arr[i] ==1)
        {
            arr[i] =0;
            return c(arr);
        }
    }
    return c(arr);
}

void solve()
{
    long long len;
    scanf("%lld", &len);
    vector<long long> a;
    for (long long i = 0; i < len; i++)
    {
        long long x;
        scanf("%lld", &x);
        a.push_back(x);
    }

    long long num_inversion = c(a);
     long long add_1 = add1(a);
     long long add_0 = add0(a);
     cout<<max(max(num_inversion,add_1),add_0)<<endl;
}

int main()
{

    long long t;
    scanf("%lld", &t);
    while (t--)
    {
        solve();
    }
}