#include<bits/stdc++.h>

using namespace std;

int main(){
    string a;
    cin>>a;
    char pointer;
    pointer  = 'a';
    int total=0, ltotal;
    for (int i = 0; i < a.size(); i++)
    {
         ltotal = min(abs(a[i] - pointer),abs('z'-a[i] +pointer -'a'+1));
        total +=min(ltotal,abs('z' -pointer +a[i] -'a'+1));
        pointer = a[i];
        
    }
    cout<<total<<endl;
    
}