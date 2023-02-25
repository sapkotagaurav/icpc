#include <bits/stdc++.h>
using namespace std;


int main ()
{
    int n, t;
    cin >> n;

    map<int, vector<int>> m;
    vector<int> temp;
    m.insert(make_pair(0,temp));
    m.insert(make_pair(1,temp));
    m.insert(make_pair(2,temp));

    //building the map with 0,1,2 and values for array of indexes
    int input;
    int first_num;
    for(int i = 0 ; i < n ;i++) {
        cin >> input;
        if(i == 0) first_num = input;
        
        m[input].push_back(i);
    }

    int max = 0;
    for(int i = 0;  i< n; i++) {
        
    }
    /*for (auto &itr : m){
         cout << itr.first << " [";
         for(auto &ir : itr.second) cout << ir << " ";
         cout <<  "]";
    }*/

    cout << endl;



/*
    vector<int> arr(n);
    map<int, int> counter;
    counter.insert(make_pair(0,0));
    counter.insert(make_pair(1,0));
    counter.insert(make_pair(2,0));
    int pointer1 =0, pointer2 = 0;
    for(int i= 0; i <n; i++){
        cin >> arr[i];
        if (arr[i] == 0) {
            pointer2 = pointer1;
            counter[0]++;
            pointer1 = i;
        } else if (arr[i] == 1){
            counter[1]++;
        } else {
            counter[2]++;
            cout << counter[2] << endl;
        }
    }
    int ans;
    for(int i= pointer2; i <pointer1; i++){
        
    }*/

    return 0;
}