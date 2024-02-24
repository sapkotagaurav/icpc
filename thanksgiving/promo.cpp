#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long num, q;
    scanf("%lld %lld", &num, &q);
    vector<long long> v(num);
    for (size_t i = 0; i < num; i++)
    {
        scanf("%lld", &v[i]);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<long long> s(num);
    for (size_t i = 0; i < num; i++)
    {
        if(i==0){
            s[i] = v[i];
        }else{
            s[i] = s[i-1]+v[i];
        }
    }

    while (q--)
    {
        long long a, k;
        scanf("%lld %lld", &a, &k);
        long long res = 0;

        if(a==k ){
           printf("%lld\n", s[a-1]); 
           continue;
        }

        printf("%lld\n", s[a-1] - s[a-k-1]);
    }
}