#include<bits/stdc++.h>

using namespace std; 

int main(){

    int n;
    scanf("%d" ,&n);
    vector<int> nums(n);
    int num,sum =0;
    bool allZero = true;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum += num;
        if(num!=0){
            allZero = false;
        }
        nums[i] =num;
        

    }

    if(sum != 0){
        cout<<"YES"<<endl;
        cout<<1<<endl<<1<<" "<<n<<endl;
        return 0;
    }else{
        int s =0;
        if(allZero){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl<<2<<endl;
            for (int i = 0; i < n; i++)
            {
                if(nums[i] !=0){
                    cout<<1<<" "<<i+1<<endl<<i+2<<" "<<n<<endl;
                    break;
                }
                
            }
            
        }
    }


    
}