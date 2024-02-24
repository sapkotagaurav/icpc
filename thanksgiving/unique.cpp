#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n;
    scanf("%d", &n);
    if(n<=9) return n;
    if(n>45) return -1;
    if(n==45) return 123456789;
    if(n>=10 &&n<=17) return (n-9)*10+9;
    if(n>=18 && n<=24) return (n-17)*100+8*10+9;
    if(n>=25 && n<=30) return (n-24)*1000+7*100+8*10+9;
    if(n>=31 && n<=35) return (n-30)*10000+6*1000+7*100+8*10+9;
    if(n>=36 && n<=39) return (n-35)*100000+5*10000+6*1000+7*100+8*10+9;
    if(n>=40 && n<=42) return (n-39)*1000000+4*100000+5*10000+6*1000+7*100+8*10+9;
    if(n>=43 && n<=44) return (n-42)*10000000+3*1000000+4*100000+5*10000+6*1000+7*100+8*10+9;



    
    

    
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
       printf("%d\n", solve());
    }
}