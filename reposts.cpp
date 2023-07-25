#include<bits/stdc++.h>

using namespace std; 

void l(string &a){
    for (size_t i = 0; i < a.size(); i++)
    {
        if(a[i] <91 && a[i] > 64){
            a[i] = a[i] +32;
        }
    }
    
}


int main(){

    int n;
    map<string,vector<string>> m;
    map<string,int> ma;
    ma["polycarp"] =1;
    scanf("%d/n", &n);
    string a,b,c;
    getline(cin,a);
    while (n--)
    {
        getline(cin,b,' ');
        l(b);
        getline(cin,c,' ');
        getline(cin,a,'\n');
        l(a);
        m[a].push_back(b);
        ma[b] = max(ma[b],ma[a]+1);
    }
    int maxx =0;

    for (auto &&i : ma)
    {
        maxx = max(maxx, i.second);
    }
    cout<<maxx<<endl;
    
    

}