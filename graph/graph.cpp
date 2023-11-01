#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include "graph.h"

using namespace std;

template <typename T>
pair<Node<T> *, Node<T> *> p(T x, T y)
{
    Node<T> *a;
    a->setVal(x);
    Node<T> *b;
    b->setVal(y);
    return make_pair(a, b);
}

template <typename T>
vector<pair<Node<T> *, Node<T> *>> v(vector<pair<T, T>> &a)
{
    cout << "here" << a.size() << endl;
    vector<pair<Node<T> *, Node<T> *>> as;
    for (auto &&i : a)
    {
        Node<T> *a = new Node<T>(i.first);

        Node<T> *b = new Node<T>(i.second);

        as.push_back(make_pair(a, b));
    }
    return as;
}

template <typename T>
void dfsHelper(set<T> &visited, T x, map<T, vector<Edge<T>>> &ma)
{
    visited.insert(x);
    cout<<x<<endl;
    for (size_t i = 0; i < ma[x].size(); i++)
    {
        if (ma[x][i].getPairForm().first.first->getVal() == x)
        {
            if (visited.find(ma[x][i].getPairForm().first.second->getVal()) == visited.end())
            {
                dfsHelper(visited, ma[x][i].getPairForm().first.second->getVal(), ma);
            }
        }
        else
        {
            if (visited.find(ma[x][i].getPairForm().first.first->getVal()) == visited.end())
            {
                dfsHelper(visited, ma[x][i].getPairForm().first.first->getVal(), ma);
            }
        }
    }
}

template <typename T>
void dfs(Graph<T> &g)
{
    map<T, vector<Edge<T>>> ma = g.getEdgemap();
    T starting;
    cout << "Enter starting point for DFS: ";
    cin >> starting;
    set<T> visited;
    dfsHelper(visited,starting,ma);
}

template <typename T>
void bfs(Graph<T> &g)
{
    map<T, vector<Edge<T>>> ma = g.getEdgemap();
    T starting;
    cout << "Enter starting point for BFS: ";
    cin >> starting;
    queue<T> q;
    q.push(starting);
    set<T> visited;
    while (!q.empty())
    {
        T temp = q.front();
        q.pop();
        visited.insert(temp);
        cout << temp << endl;
        for (auto &&i : ma[temp])
        {
            if (temp == i.getPairForm().first.first->getVal())
            {
                if (visited.find(i.getPairForm().first.second->getVal()) == visited.end())
                {
                    visited.insert(i.getPairForm().first.second->getVal());
                    q.push(i.getPairForm().first.second->getVal());
                }
            }
            else
            {
                if (visited.find(i.getPairForm().first.first->getVal()) == visited.end())
                {
                    visited.insert(i.getPairForm().first.first->getVal());
                    q.push(i.getPairForm().first.first->getVal());
                }
            }
        }
    }
}

int main()
{
    string x, y;
    int n;
    cin >> n;
    vector<pair<string, string>> a;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a.push_back(make_pair(x, y));
    }
    vector<pair<Node<string> *, Node<string> *>> m = v<string>(a);
    Graph<string> g(m, false);

    for (auto &&i : g.getEdgemap())
    {
        cout << i.first << ":";

        for (auto &&j : i.second)
        {
            cout << "((" << j.getPairForm().first.first->getVal() << "," << j.getPairForm().first.second->getVal() << "), " << j.getPairForm().second << ") ";
        }
        cout << endl;
    }
    bfs<string>(g);
    dfs<string>(g);
}