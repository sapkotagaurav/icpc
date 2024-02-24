#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int x=0,y=0,z=0;
    string a="";
    for (int i = 0; i < 3; i++)
    {
        string b;
        cin>>b;
        a =a +b;
    }
    for (size_t i = 0; i < a.size(); i++)
    {
        switch (a[i])
        {
        case 'A':x++;break;
        case 'B':y++;break;
        case 'C':z++;break;
        default:break;
        }
        
    }
    if (x<3)
    {
        cout<<"A"<<endl;return;
    }
    if (y<3)
    {
        cout<<"B"<<endl;return;
    }
    if (z<3)
    {
        cout<<"C"<<endl;return;
    }
    
    
    
    
    
    
    
    
    

    
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solve();
}