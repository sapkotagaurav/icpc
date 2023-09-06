#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    int d;
    int south = 0;
    scanf("%d", &t);
    while (t--)
    {
        cin>>d>>s;
        if(south>20000 or south<0){
            cout << "NO" << endl;
            return 0;
        }
        if ((s == "North" or s == "South") and d > 20000)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (south == 0)
        {
            if (s != "South")
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        if (south == 20000)
        {
            if (s != "North")
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        if(s == "South"){
            south+=d;
        }
        if(s == "North"){
            south-=d;
        }
    }
    if (south != 0)
    {
        cout << "NO" << endl;
        return 0;
    }else{
        cout<<"YES"<<endl;
    }
}