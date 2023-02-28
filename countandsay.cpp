#include<bits/stdc++.h>
using namespace std;

string asd(int n){
    string s ="1";
    string sec="";
    int counter =0;
    int counter2=1;
    while (counter2<n){
        int i=0;
        while(i<s.size())
        
        {
            while ((s[counter] == s[i]) && (i<counter))
            {
                counter++;
            }
            sec +=to_string(counter) + to_string(s[i]);
            i=counter;
            
            
        }
        counter2++;
       s = sec; 
    }
    return s;
    

    

}
int main(){
    cout<<asd(2);
}