#include <bits/stdc++.h>

using namespace std;

class MyStack
{
private:
    queue<int> a;
    queue<int> b;

public:
    MyStack()
    {
    }

    void push(int x)
    {
        a.push(x);
    }

    int pop()
    {
        int temp = a.front();
        
        
    }

    int top()
    {
        return a.front();
    }

    bool empty()
    {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

int main()
{
}