// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include<vector>
#include<cmath>

 

using namespace std;

 

bool filterumm(string &word){
    for(int i =0; i<word.size(); i++){
        if(word[i] == 'u' || word[i] =='m' || ispunct(word[i])){

        }else{
            return false;
        }
    }
    return true;
}

 

string convertummtobinary(string &word){
    string a ="";
    for(int i=0; i< word.size(); i++){
        if(word[i] == 'u'){
            a+='1';
        }
        if(word[i] == 'm'){
            a+= '0';
        }

    }
    return a;
}
string convertbinarytoascii( string s){
string a ="";
int x =0;
int temp =0;
for (int i = s.size() - 1; i >= 0; i--)
{

    if (s[i] =='1')
    {
        temp += pow(2,x);
    }
    if (x == 6 )
    {
        a = static_cast<char>(temp)+a;
        temp=0;x=0;
    }else{
    x++;
    }

    
    
    
}
return a;

}

 

 

int main() {
    string binary="";
    string s;
    getline(cin,s);
    string m="",tempword="";
    for(int i = 0; i< s.size() ;i++){
        if(s[i] == ' '){
            if(filterumm(tempword)){
                binary+=convertummtobinary(tempword);
            }
            i++;

            tempword ="";
        }
        tempword +=s[i];

    }
     if(filterumm(tempword)){
         binary+=convertummtobinary(tempword);
    }
cout<<convertbinarytoascii(binary)<<endl;




}