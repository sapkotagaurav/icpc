#include <bits/stdc++.h>

using namespace std;
int main(){

int ndorms, nletters;
long long no_rooms;
long long temp;
long long room_number;
int pointer=0;
cin>>ndorms>>nletters;

vector<long long> a(ndorms);
for (int i = 0; i < ndorms; i++)
{
    cin>>temp;
    no_rooms += temp;
    a[i]=no_rooms;
 
}

for (int i = 0; i < nletters; i++)
{
    cin>>room_number;

    if (room_number < a[0]){
        cout<<room_number<<endl;
    }else{
        
    }
    

    cout<<pointer<<" "<<room_number<<" "<< a[pointer]<<endl;
    if(pointer ==0 ){
        cout<<room_number<<endl;

    }else{
        cout<<room_number-a[pointer-1]<<endl;
    }
    if (a[pointer]<room_number){
        pointer++;

    }

    
    
}




}



