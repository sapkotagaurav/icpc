#include<bits/stdc++.h>

 using namespace std; 

 int main(){
    int n;
    scanf("%d", &n);
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vec[i]);
    }
    printf("%d %d\n",abs(vec[0]-vec[1]),abs(vec[0]-vec[n-1]));

    for (int i = 1; i < n-1; i++)
    {
        printf("%d %d\n",min(abs(vec[i]-vec[i-1]),abs(vec[i]-vec[i+1])),max(abs(vec[i]-vec[0]),abs(vec[i]-vec[n-1])));

    }
    printf("%d %d\n",abs(vec[n-1]-vec[n-2]),abs(vec[0]-vec[n-1]));

    
    




}