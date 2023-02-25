#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string str;
    cin >> str;

    map<char, vector<int>> m;
    vector<int> temp;
    m.insert(make_pair('A',temp));
    m.insert(make_pair('B',temp));

    int n = str.size();
    for(int i = 0 ; i < n ;i++) {
       if(str[i] == 'A') {
            m['A'].push_back(i);
       } else {
            m['B'].push_back(i);
       } 
    }
}