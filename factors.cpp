#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> allprimesbelowd(int d)
{
    vector<int> retvec;
    for (int i = 2; i <= d; i++)
    {
        if (isPrime(i))
        {
            retvec.push_back(i);
        }
    }
    return retvec;
}

vector<int> primeFactor(int a)
{
    vector<int> retvec;
    int num = a;
    while (num > 1)
    {
        if (isPrime(num))
        {
            retvec.push_back(num);
            return retvec;
        }
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                num = num / i;
                retvec.push_back(i);
                break;
            }
        }
    }
    return retvec;
}

void solve(int d, map<int, vector<int>> &m)
{
    map<int, int> secma;
    for (int i = 2; i <= d; i++)
    {
        if (m[i].empty())
        {
            m[i] = primeFactor(i);
        }
    }
    for (auto &&i : m)
    {
        if (i.first <= d)
        {
            for (auto &&j : i.second)
            {
                secma[j]++;
            }
        }
    }
    int lolwa = 0;
    cout << setw(3) << d << "! =";

    for (auto &&i : secma)
    {
        if (lolwa > 0 and lolwa % 15 == 0)
        {
            cout << endl;
            cout << "      ";
        }

        cout << setw(3) << i.second;
        lolwa++;
    }
    cout << endl;
}

int main()
{
    map<int, vector<int>> m;

    int d;
    while (1 < 2)
    {
        cin >> d;
        if (d == 0)
            break;
        solve(d, m);
    }
}