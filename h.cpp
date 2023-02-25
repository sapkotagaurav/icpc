#include <bits/stdc++.h>
using namespace std;


int main ()
{
    vector<int > arr;
    int s;
    cin >> s;
    int x,y;


    for(int i = 0; i < 4; i++) {
        s = s+ floor(s/13)+15;
        x = s%100;
        arr.push_back(x);
        

    }
    int inp;
    int x1,y1,x2,y2,min_dist=INT_MAX,dist;
    while(arr.size()>0){
        cin>>inp;
            min_dist=INT_MAX;

        for (int i = 0; i < arr.size(); i++){
            if (inp == arr[i])
            {
                /* code */
                cout<<"You hit wumpus!"<<endl;
                arr.erase(arr.begin()+i);
                x1 = inp/10;
                y1 = inp%10;
                for (int j = 0; j < arr.size(); j++)
                {
                    x2 = arr[j]/10;
                    y2 = arr[j]%10;
                    dist = abs(x1-x2) + abs(y1-y2);
                    min_dist = min(dist,min_dist);
                }
                
            }else{
                x1 = inp/10;
                y1 = inp%10;
                for (int j = 0; j < arr.size(); j++)
                {
                    x2 = arr[j]/10;
                    y2 = arr[j]%10;
                    dist = abs(x1-x2) + abs(y1-y2);
                    min_dist = min(dist,min_dist);
                }

            }
            
    

            
                

            
                
                
        
        
    }
                    cout<<min_dist<<endl;

    }

}