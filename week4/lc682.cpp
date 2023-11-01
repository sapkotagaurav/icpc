#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        int sum =0;
        stack<int> a;
        int num = operations.size();
        for (size_t i = 0; i < num; i++)
        {
           if(operations[i] == "C"){
            sum = sum - a.top();
            a.pop();
           }else if(operations[i] == "D"){
            sum = sum + a.top()*2;
            a.push(a.top()*2);

           }else if(operations[i] =="+"){
            int sfda = a.top();
            a.pop();
            int lfda = a.top();
            sum = sum + sfda + lfda;
            a.push(sfda);
            a.push(sfda+lfda);

           }else{
            int ff = stoi(operations[i]);
            sum+=ff;
            a.push(ff);
           }
        }
        
        return sum;
    }
};

int main()
{
}