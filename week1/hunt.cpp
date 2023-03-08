#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> random_locations(int seed)
{
    int s = seed;
    vector<pair<int, int>> v;
    int i = 0;
    while (i < 4)
    {
        s = s + floor(s / 13) + 15;
        int n1 = s % 100;
        int n2 = n1 % 10;
        n1 = n1 / 10;
        bool f = false;
        for (int j = 0; j < v.size(); j++)
        {
            if (n1 == v[j].first and n2 == v[j].second)
            {
                f = true;
            }
        }
        if (!f)
        {

            v.push_back(pair<int, int>(n1, n2));
            i++;
        }
    }

    return v;
}
int fou(vector<pair<int, int>> v, pair<int, int> p)
{
    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i].first == p.first and v[i].second == p.second)
        {
            return i;
        }
    }
    return -1;
}

int calculateDistance(vector<pair<int, int>> v, pair<int, int> p)
{
    int minsize = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        int dist = (abs(v[i].first - p.first) + abs(v[i].second - p.second));
        if (dist < minsize)
        {
            minsize = dist;
        }
    }
    return minsize;
}

int main()
{
    int seed;
    cin >> seed;
    vector<pair<int, int>> locations = random_locations(seed);
    bool found = false;
    int score = 0;
    int total = 4;
    while (0 < locations.size())
    {
        int guess;
        cin >> guess;
        int n1 = guess / 10;
        int n2 = guess % 10;

        int f = fou(locations, pair<int, int>(n1, n2));
        if (f != -1)
        {
            cout << "You hit a wumpus!" << endl;
            locations.erase(locations.begin() + f);
            if (!locations.empty())
                cout << calculateDistance(locations, pair<int, int>(n1, n2)) << endl;
        }
        else
        {
            cout << calculateDistance(locations, pair<int, int>(n1, n2)) << endl;
        }
        score++;
    }
    cout << "Your score is " << score << " moves." << endl;
}