#include <bits/stdc++.h>

using namespace std;

bool isMapequal(map<char, int> &m1, map<char, int> &m2)
{
    return (m1.size() == m2.size() and equal(m1.begin(), m1.end(), m2.begin()));
}



void solve(string k)
{
    vector<string> vec;
    vector<map<char, int>> anot;
    vector<string> third;
    int siz = k.size();
    string temp = "";
    map<char, int> ma;
    for (int i = 0; i < siz; i++)
    {
        if (k[i] == ' ')
        {
            if (!ma.empty())
            {
                anot.push_back(ma);
                vec.push_back(temp);
                ma.clear();
                temp = "";
            }
        }
        else
        {
            ma[tolower(k[i])]++;
            temp += k[i];
        }
    }
    
    for (int i = 0; i < anot.size(); i++)
    {
        bool found = false;
        for (int j = 0; j < anot.size(); j++)
        {
            if (i != j and isMapequal(anot[i], anot[j]))
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            third.push_back(vec[i]);
        }
    }
    sort(third.begin(), third.end());
    for (auto &&i : third)
    {
        cout << i << endl;
    }
}

int main()
{
    string s;
    string k = "";
    while (1 == 1)
    {
        cin >> s;
        if (s == "#")
        {
            break;
        }
        k += " ";
        k += s;
    }
    k+=" ";

    solve(k);
}