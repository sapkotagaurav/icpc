#include <bits/stdc++.h>

using namespace std;

int enclosed_area(int x)
{
    switch (x)
    {
    case 0:
    {
        return 1;
        break;
    }
    case 4:
    {
        return 1;
        break;
    }
    case 6:
    {
        return 1;
        break;
    }
    case 8:
    {
        return 2;
        break;
    }
    case 9:
    {
        return 1;
        break;
    }

    default:
        return 0;
        break;
    }
}
int digs(int x){
    string s = to_string(x);
    int sum =0;
    for (size_t i = 0; i < s.size(); i++)
    {
        sum += enclosed_area(s[i] -'0');
    }
    return sum;
    
}

int recur(int x, int k){
    if(x ==1){
        if(k%2 ==0){
            return 1;
        }else{
            return 0;
        }
    }
    if(x ==0){
        if(k%2 ==0){
            return 0;
        }else{
            return 1;
        }
    }
    if (k==0)
    {
        return x;
    }else{
        return recur(digs(x),k-1);

    }
    

}

void solve()
{
    int x,k;
    scanf("%d %d",&x,&k);
    cout<<recur(x,k)<<endl;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}