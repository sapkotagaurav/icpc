#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string, int> a;
    multimap<int,int> x;
    vector<int> y;
    vector<int>z;
    
    int numRanks,pos,temp1,temp2;
    cin>>numRanks>>pos;
    for (int i = 0; i < numRanks; i++)
    {
        cin>>temp1>>temp2;
        x.insert(pair<int,int>(temp1,temp2));
        if(a.find(to_string(temp1)+"-"+to_string(temp2))==a.end()){
            a[to_string(temp1)+"-"+to_string(temp2)] =1;
        }else{
            a[to_string(temp1)+"-"+to_string(temp2)]++;
        }
    }
    for (auto &&i : x)
    {
        y.push_back(i.first);
        z.push_back(i.second);
    }
    int rev_pos = numRanks -pos;
    cout<< a[to_string(y[rev_pos])+"-"+to_string(z[rev_pos`])]<<endl;

    
    
    
    


}