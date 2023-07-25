#include<bits/stdc++.h>

using namespace std; 

string changeToLower(string s){
    int siz = s.size();
    for (int i = 0; i < siz; i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
    
}

vector<string> processS(string s){
    int siz = s.size();
    int nums=0;
    vector<string> vec;
    for (size_t i = 0; i < siz; i++)
    {
        if(s[i] =='s'){
            nums++;
        }else{
            nums=0;
        }
        if(nums>1){
            vec.push_back(s.substr(0,i-1)+'B'+s.substr(i+1));

        }

        
    }
    return vec;
    
}

int main(){

    string s;
    cin>>s;
    string se2;
    queue<string> q;
    set<string> se;
    se2 = changeToLower(s);
    q.push(se2);
    while(!q.empty()){
        
        string temp = q.front();
        se.insert(temp);
        q.pop();
        for (auto &&i : processS(temp))
        {
            q.push(i);
        }
        



    }
    for (auto &&i : se)
    {
        cout<<i<<endl;
        
    }
    

    

//    string s;
//    while(s!="Q"){
//     cin>>s;
//     for (auto &&i : processS(s))
//     {
//         cout<<i<<" ";
        
//     }
//     cout<<endl;
//    }
}