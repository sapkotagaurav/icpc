#include <bits/stdc++.h>

using namespace std;

 char nextGreatestLetter(vector<char>& letters, char target) {
    int high = letters.size()-1, low =0 , mid,retIndex;
    char ret;
    if(target<letters[0] or target>=letters[high]) return letters[0];
    if(target=letters[high]) return letters[0];

    while (low<=high)
    {
        mid = low + (high - low)/2;
        if(letters[mid]<= target){
            retIndex = mid;
            low =low+1;
        }else{
            high = high -1;
        }
    }
    return letters[retIndex+1];
    
        
    }

 int main(){
    int n;
    char  target;
    cout<<"Enter numbers of letters"<<endl;
    cin>>n;
    vector<char> letters(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>letters[i];
    }
    cout<<"Enter Target"<<endl;
    cin>>target;
    cout<<endl;
    cout<<nextGreatestLetter(letters,target)<<endl;
    
 }