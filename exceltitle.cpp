#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber)
{
    string a;
    int b = columnNumber;
    int remainder;
    //
    while (b > 0)
    {
        remainder = b % 26;
        b = b / 26;
        if (remainder == 0  )
        {
            remainder = 26;
            b = b-1;
        }
        else
        {
        }
        a = char(64 + remainder) + a;
    }
    return a;
}
int main()
{

    int a;
    while (a != 0)
    {
        cin >> a;
        cout << a << ": " << convertToTitle(a) << endl;
    }
}