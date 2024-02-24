#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int s,n;
    scanf("%d %d", &s,&n);
    int x,y;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    bool win = true;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        pq.push({x,y});

        
    }
    pair<int,int> temp;
    while(!pq.empty()){
         temp = pq.top();
         pq.pop();
         if(s>temp.first){
            s+=temp.second;
         }else{
            win = false;
            break;
         }

    }
    if(win){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    




}