#include<bits/stdc++.h>

using namespace std;

string convert(string s,int numRows){
    vector<vector<char>> a(numRows);
    int count =0;
    int size = s.size();
    if(size==1 || numRows==1)
        return s;
    int r=0;
    int oneless = numRows-1;
    while (count<size){
        if(r%oneless==0){
            for (int i = 0; i < numRows; i++)
            {
                a[i].push_back(s[count]);
                count++;
            }
            
        }else{
            a[oneless-(r%oneless)].push_back(s[count]);
            count++;
        }
        r++;

    }
    string toret="";
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            toret += a[i][j];
        }
        
    }
    return toret+"";
    
}
int main(){
    cout<<convert("PAYPALISHIRING",2)<<endl;
}