#include<bits/stdc++.h>

using namespace std;

vector<int> insertion_sort(vector<int> v){

    for (int i = 0; i < v.size(); i++)
    {
        int key = v[i];
       int j =i-1;
        while (j>=0 and v[j]>key){
            v[j+1] = v[j];
            j=j-1;
        }
        v[j+1] = key;

    }
    return v;
    
}

int main(){
    vector<int> k {7,3,5,6,7,3,5,6};
    for (auto &&i : insertion_sort(k))
    {
        cout<<i<<" ";
    }
    

}