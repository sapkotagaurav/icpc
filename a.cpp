#include <bits/stdc++.h>


using namespace std;

int main ()
{
    int r, f;
    cin >> r >> f;

    bool up; 
    if ((f/r)%2 == 0){
        up = true;
    } else {
        up = false;
    }

    if (f%r > r/2) {
        up = !up;
    } 

    if (up) cout << "up";
    else cout << "down";

    cout << endl;

    return 0;
}