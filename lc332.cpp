class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> ret;
        string last ="";
        map<string, priority_queue<string,vector<string>,greater<string>>> m;
        map<string,int> m2;
        for (int i = 0; i < tickets.size(); i++)
        {
            m[tickets[i][0]].push(tickets[i][1]);
            m2[tickets[i][0]]++;
            m2[tickets[i][1]] = m2[tickets[i][1]];
        }
        for (map<string,int>::const_iterator i = m2.begin(); i != m2.end(); i++)
        {
          cout<<i->first<<" "<<i->second<<endl;
            if (i->second ==0)
            {
                last = i->first;
                
            }
            
        }
        
        string temp = "JFK";
        string temp2;
        vector<string> tempvec;
        while(!m[temp].empty()){

            ret.push_back(temp);
            temp2 = temp;
            temp = m[temp].top();
            m[temp2].pop();

            if(temp ==last){
                temp = m[temp2].top();

            }
            // if(m2[temp] ==0){
            //   bool f = false;
            //   while(m2[temp] ==0){
            //     temp = m[temp2].top();
            //     tempvec.push_back(temp);
            //     m[temp2].pop();

            //   }
            //   for(int i =0;i<tempvec.size();i++){
            //     m[temp2].push(tempvec[i]);
            //   }
            //   tempvec.clear();

            // }
            

        }

        ret.push_back(temp);
        if (last.size()>0 && last!=temp)
        {
            ret.push_back(last);
        }
        
        return ret;
        

        
    }
};