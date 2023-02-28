#include <bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int> a, vector<int> b)
{
    vector<int> c;
    int aSize = a.size(), bSize = b.size(), aPointer = 0, bPointer = 0;
    while (aPointer < aSize && bPointer < bSize)
    {
        if (a[aPointer] < b[bPointer])
        {
            c.push_back(a[aPointer]);
            aPointer++;
        }
        else
        {
            c.push_back(b[bPointer]);
            bPointer++;
        }
    }
    while (aPointer < aSize)
    {
        c.push_back(a[aPointer]);
        aPointer++;
    }
    while (bPointer < bSize)
    {
        c.push_back(b[bPointer]);
        bPointer++;
    }

    return c;
}

vector<int> mergeSort(vector<int> arr)
{

    int s = arr.size();
    if (s == 1)
        return arr;
    vector<int> v1(arr.begin(), arr.begin() + s / 2);
    vector<int> v2(arr.begin() + s / 2 , arr.end());

    v1 = mergeSort(v1);
    v2 = mergeSort(v2);
    return merge(v1, v2);
}

int main(){
    vector <int> a {0,1,1,1,1};
    vector <int> b= mergeSort(a);
    for (auto &&i : b)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}