#include <bits/stdc++.h>

using namespace std;

void svwap(vector<char> &v, int p1, int p2)
{
    char temp;
    temp = v[p1];
    v[p1] = v[p2];
    v[p2] = temp;
}

// void inplace(vector<char> &v)
// {
//     int n = v.size();

//     // Move all Rs to the beginning of the vector
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (v[i] != 'R' && v[j] == 'R') {
//                 svwap(v, i, j);
//             }
//         }
//     }

//     // Move all Gs after the Rs to the beginning of the remaining vector
//     for (int i = 1; i < n - 1; i++) {
//         if(v[i] == 'R'){
//             continue;
//         }
//         for (int j = i + 1; j < n; j++) {
//             if (v[i] != 'G' && v[j] == 'G') {
//                 svwap(v, i, j);
//             }
//         }
//     }
// }

void inplace(vector<char> &v)
{
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == 'R')
        {
            if (v[j] != 'R')
            {
                svwap(v, i, j);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }

        else
        {
            if (v[j] != 'R')
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
    }
    
    i=0;
    while (i < j)
    {
        if (v[i] == 'G')
        {
            if (v[j] != 'G')
            {
                svwap(v, i, j);
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }

        else
        {
            if (v[j] != 'G')
            {
                i++;
            }
            else
            {
                i++;
                j--;
            }
        }
    }
}

int main()
{
    vector<char> a{'G','R', 'R', 'B','G', 'R', 'B','G', 'B', 'R','B','B','G'};
    inplace(a);
    for (auto &&i : a)
    {
        cout << i << " ";
    }
}