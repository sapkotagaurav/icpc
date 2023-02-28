#include <bits/stdc++.h>

using namespace std;
long long divide(long long dividend, long long divisor)
{
    long long d1 = abs(dividend);
    long long d2 = abs(divisor);
    long long result = pow(10,(log10(d1) - log10(d2)));
    cout<<result<<" "<<(231/3)<<endl;

    if ((dividend < 0 || divisor < 0) && !(dividend < 0 && divisor < 0))
    {
        result = result * -1;
    }
    // if (result > (pow(2, 31) - 1))
    //     return pow(2, 31) - 1;
    // if (result < (-1 * pow(2, 31)))
    //     return -1 * pow(2, 31);

    return result - result % 1;
}

int main()
{
    cout << divide(2147483647, 1);
}