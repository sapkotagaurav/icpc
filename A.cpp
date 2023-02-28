#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int occ(int x, int y, vector<int> z){
    return(vector<int>(z.begin(),z.begin()+y).size()- count(z.begin(),z.begin()+y,0));
}

int main(){
    int x,y,temp;
    vector<int> z;
    cin>>x>>y;
    for (int i = 0; i < x; i++)
    {
        cin>>temp;
        z.push_back(temp);
    }
    cout<<x<<y<<endl;
    for (auto &&i : z)
    {
        cout<<i;
    }
    
    
    
    
}