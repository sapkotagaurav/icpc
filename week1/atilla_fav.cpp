/*
In order to write a string, Atilla needs to first learn all letters that are contained in the string.

Atilla needs to write a message which can be represented as a string s

. He asks you what is the minimum alphabet size required so that one can write this message.

The alphabet of size x
(1≤x≤26) contains only the first x Latin letters. For example an alphabet of size 4 contains only the characters a, b, c and d

.
Input

The first line contains a single integer t
(1≤t≤1000

) — the number of test cases.

The first line of each test case contains a single integer n
(1≤n≤100

) — the length of the string.

The second line of each test case contains a string s
of length n

, consisting of lowercase Latin letters.
Output

For each test case, output a single integer — the minimum alphabet size required to so that Atilla can write his message s
.
*/

#include <bits/stdc++.h>

using namespace std;
int biggestchar(){
    int m;
    int len;
    string s;
    scanf("%d", &len);
    cin>>s;
    m =s[0]-'a'+1;
    for (int i = 0; i < len; i++)
    {
        m = max(m,s[i]-'a'+1);
    }
    return m;
    
}


int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        cout<<biggestchar()<<endl;
    }
    
}