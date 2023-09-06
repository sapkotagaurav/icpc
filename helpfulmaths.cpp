#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    string s;
    cin>>s;
    int siz = s.size();
    vector<int> vec;
    for (int i = 0; i < siz; i++)
    {
        if(s[i] !='+'){
            vec.push_back(s[i] -'0');
        }
    
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        
        cout<<vec[i];
        if(i!=vec.size()-1){
            cout<<'+';

        }
    
    }
    cout<<endl;

    




}