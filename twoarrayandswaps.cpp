#include<bits/stdc++.h>

 using namespace std; 
 void solve(){
    int n,s;
    scanf("%d %d", &n, &s);
    priority_queue<int> pq1;
    vector<int> v1;
    vector<int> v2;
    priority_queue<int> pq2;
    int x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        pq1.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        pq2.push(x);
    }
    for (size_t i = 0; i < n; i++)
    {
        v1.push_back(pq1.top());
        v2.push_back(pq2.top());
        pq1.pop();
        pq2.pop();

    }
    int temp;
    for (int i = 0; i < s; i++)
    {
        temp = v1[n-1-i];
        v1[n-1-i] = v2[i];
        v2[i] = temp;
        
    }
    int sum1 =0;
    int sum2 =0;


    for (int i = 0; i < n; i++)
    {
        sum1+=v1[i];
        sum2+=v2[i];
    }
    for (int i = n-s; i < n; i++)
    {
        sum1+=v1[i];
        sum2+=v2[i];
    }
    printf("%d\n",max(sum1,sum2));
    
    
    
    
 
 }

 int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        solve();
    }




}