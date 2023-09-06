#include <iostream>
#include <map>
#include <vector>

using namespace std;

template <typename T>
class Node
{
private:
    T x;

public:
    Node(T v){x = v;};
    void setVal(T v){x = v;};
    T getVal()
    {
        return x;
    }
};

template <typename T>
class Edge
{
private:
    pair<pair<Node<T> *, Node<T> *>, int> x;
    bool isWeighted;

public:
     Edge(Node<T>* xn, Node<T>* y, bool isWeighted, int weight = 1)
    {
        makeEdge(xn, y, weight);
    }
    pair<pair<Node<T> *, Node<T> *>, int> getPairForm()
    {
        return x;
    }
    void makeEdge(Node<T>* xn, Node<T>* y, int weight = 1)
    {
        x = {{xn, y}, weight};
    }
};

template <typename T>
class Graph
{
private:
    vector<Edge<T>> edgeList;
    map<T, vector<Edge<T>>> m;
    bool dir;

public:
    void setDir(bool x){
        dir =x;
    }
     Graph(vector<pair<Node<T> *, Node<T> *>> &p,bool d){
        dir =d;
        makeGraph(p);
        
        
    }
    vector<Edge<T>> getEdgeList()
    {
        return edgeList;
    }

    void makeGraph(vector<pair<Node<T> *, Node<T> *>> &p)
    {
        for (int i = 0; i < p.size(); i++)
        {
            Edge<T> e(p[i].first,p[i].second,false,1);
            edgeList.push_back(e);
            m[p[i].first->getVal()].push_back(e);
            if (!dir)
            {
                // Edge<T> es(p[i].second,p[i].first,false,1);

                // edgeList.push_back(es);
                m[p[i].second->getVal()].push_back(e);
            }

        }
    }
    map<T, vector<Edge<T>>> getEdgemap(){
        return m;

    }
    
};
