#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m = 0;
    scanf("%d", &n);
    string num;
    num = to_string(n);
    if(n<10){
        cout<<n+1<<endl;
        return 0;
    }
    for (size_t i = 0; i < num.size(); i++)
    {
        m = m * 10 + num[0] - '0';
    }
    if (n >= m)
    {
        cout << (num.size() - 1) * 10 + (num[0] - '0')<<endl;
    }
    else
    {
        cout << (num.size() - 1) * 10 + (num[0] - '0') - 1<<endl;;
    }
}

forra