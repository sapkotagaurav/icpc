#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, k;
    scanf("%d %d", &n, &k);
    unsigned long long counter = 0,ans = 0, num = 0, mult =1;
    for(int i = 1; i <= n; i++) {
        if (num > 10000000000){
            
        }
        num = num *mult +  i;
        if(counter==9) {
            counter = 0;
            mult = 10;
        }
        if(num % k == 0) {
            ans++;
        }
        counter ++;
        cout << num <<endl;
        mult *= 10;
    }

    cout <<  ans;

}