#include<bits/stdc++.h>

using namespace std;

vector<int> get_prime(int n){
    vector<int> a;
    int b = n;
    while(b%2 == 0){
a.push_back(b);
b = b/2;
    }
    for (int i = 0; i < sqrt(b); i++)
    {
        while (b%i ==0)
        {
            a.push_back(b);
            b = b/i;
        }
        
    }

    if (b>2)
    {
        a.push_back(b);
    }
    
    return a;

}