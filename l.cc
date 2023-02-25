#include <bits/stdc++.h>


using namespace std;

int main ()
{
    string ab;
    cin >> ab;

    int counter_a = 0, counter_b = 0;
    vector<int> set;
    int s = 0;
    vector<int> ans;
    int pointer_b = 0;
    bool A_wins = false;
    for (int i =0 ; i < ab.size(); i++) {
        if (ab[i] == 'A'){
            counter_a++;
            
        } else {
            counter_b++;
            pointer_b = i;
        }
        if (counter_a > counter_b) {
            set.push_back(counter_a);
            A_wins = true;
            s = set[0];

            if (ab.size()  != 2) {
                if( counter_a%s == 0 && counter_a!=1) {
                    ans.push_back(counter_a);
                }
            } else {
                if (counter_a%s == 0)
                    ans.push_back(counter_a);
            }
        }

    }
    //cout << "set" <<endl;
    /*
    for(auto &itr: set) {
        cout << itr << " ";
    } cout <<'\n';*/

    if (counter_a >= counter_b ) {
        //if B wins
        if (ab[ab.size()-1] == 'A'){
            counter_a = counter_a - (ab.size()-1 - pointer_b );
        }
        ans.push_back(counter_a);
    }

    /*
    cout << "ans" <<endl;
    for(auto &itr: ans) {
        cout << itr << " ";
    } cout <<'\n';*/

    vector<int> ans1;
    int prev = ans[0];
    ans1.push_back(prev); 
    for(int i =1 ; i < ans.size(); i++ ) {
        if(prev != ans[i]) {
            prev = ans[i];
            ans1.push_back(prev); 
        }
    }
    if (!A_wins) {
       cout << 0 << endl; 
    } else {
        cout << ans1.size() << endl;
        for(auto &itr : ans1) cout << itr << " ";
        cout << endl;

    }


    return 0;
}