#include <bits/stdc++.h>
using namespace std;

 class TrieNode {
    private:
        char val;
        TrieNode * children [26];
        int wordcount;
        vector<int> whichletter;
        
    public:
     
        void insert(TrieNode* &crawl,string &word,int index){
            TrieNode * root = crawl;
            if (!crawl){
                TrieNode * root = new TrieNode;
            }

            

            for (size_t i = 0; i < word.size(); i++)
            {
                
                
                
                if(!root->children[word[i] - 'a']){
                    TrieNode *newNode=  new TrieNode();
                    newNode->val = word[i];
                    newNode->wordcount =1;
                    newNode->whichletter.push_back(index);
                    root->children[word[i] - 'a'] = newNode;
                }else{
                    root->children[word[i] - 'a']->wordcount++;
                    root->children[word[i] - 'a']->whichletter.push_back(index);
                }
                
                
                root = root->children[word[i] - 'a'];

                
            }
            

        }
		void insertReverese(TrieNode* &crawl,string &word,int index){
            TrieNode * root = crawl;
            if (!crawl){
                TrieNode * root = new TrieNode;
            }

            

            for (size_t i = word.size()-1; i >=0 ; i--)
            {
                
                
                
                if(!root->children[word[i] - 'a']){
                    TrieNode *newNode=  new TrieNode();
                    newNode->val = word[i];
                    newNode->wordcount =1;
                    newNode->whichletter.push_back(index);
                    root->children[word[i] - 'a'] = newNode;
                }else{
                    root->children[word[i] - 'a']->wordcount++;
                    root->children[word[i] - 'a']->whichletter.push_back(index);
                }
                
                
                root = root->children[word[i] - 'a'];

                
            }
            

        }
        vector<int> search(TrieNode * &root, string &word){
            vector <int> dummy;
            if(! root){
                return dummy;
            }
            TrieNode * crawl =  root;
            for (size_t i = 0; i < word.size(); i++)
            {
                
                if(!crawl  || ! crawl->children[word[i] - 'a'] ){
                    return dummy;
                 }
                crawl = crawl->children[word[i] - 'a'];
                
                

                
            }
            //cout<<crawl->whichletter.size()<<endl;
            return crawl->whichletter;

        }
		vector<int> searchReverse(TrieNode * &root, string &word){
            vector <int> dummy;
            if(! root){
                return dummy;
            }
            TrieNode * crawl =  root;
            for (size_t i = word.size()-1; i >=0 ; i--)
            {
                
                if(!crawl  || ! crawl->children[word[i] - 'a'] ){
                    return dummy;
                 }
                crawl = crawl->children[word[i] - 'a'];
                
                

                
            }
            //cout<<crawl->whichletter.size()<<endl;
            return crawl->whichletter;

        }

 };

 int andfun(TrieNode * &dict,TrieNode * &rdict, string &p, string &s, string &op){
    vector<int> a = dict->search(dict,p);
    vector<int> b = rdict->searchReverse(rdict,s);
    
    
    int siz = 0;
    unordered_map<int, bool>ma;
    for (int i = 0; i < b.size(); i++)
    {
        ma[b[i]] = true;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(ma[a[i]]) siz++;
    }
    if(op=="AND"){
        return siz;
    }else if(op=="OR"){
        return a.size()+ b.size() -siz;
    }else{
        return a.size()+ b.size() -siz -siz;
    }
 }






int main() {
    int n,m;
    scanf("%d %d", &n,&m);
    TrieNode *t = new TrieNode();
    TrieNode *r = new TrieNode();
    string a;
    string b,c,d;
    for (size_t i = 0; i < n; i++)
    {
        cin>>a;
        t->insert(t,a,i);
        //reverse(a.begin(),a.end());
        r->insertReverese(r,a,i);
    }
    for (size_t i = 0; i < m; i++)
    {
        cin>>b>>c>>d;
        //reverse(d.begin(),d.end());
        cout<<andfun(t,r,c,d,b)<<endl;
        
        
        
    }
    
    




}
