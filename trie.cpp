#include<bits/stdc++.h>

 using namespace std; 


 class TrieNode {
	private:
		char val;
		TrieNode * children [26];
		int wordcount;
		
	public:
	 
		void insert(TrieNode* &crawl,string word){
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
					root->children[word[i] - 'a'] = newNode;
				}else{
					root->children[word[i] - 'a']->wordcount++;
				}
				
				
				root = root->children[word[i] - 'a'];
				cout<<root->val<<root->wordcount<<endl;

				
			}
			

		}
		int search(TrieNode * &root, string word){
			if(! root){
				return 0;
			}
			TrieNode * crawl =  root;
			for (size_t i = 0; i < word.size(); i++)
			{
				
				if(!crawl  || ! crawl->children[word[i] - 'a'] ){
				 	return 0;
				 }
				crawl = crawl->children[word[i] - 'a'];

				
			}
			return crawl->wordcount;

		}

 };

 int main(){
	vector<string> a = {"asd","asf","als","ad"};
	
	TrieNode *t = new TrieNode;
	TrieNode *r = new TrieNode;
	for (size_t i = 0; i < a.size(); i++)
	{
		t->insert(t,a[i]);
		cout<<a[i]<<endl<<"_______"<<endl;
		reverse(a[i].begin(),a[i].end());
		r->insert(r,a[i]);

		
	}
	cout<<t->search(t,"ad")<<endl;
	cout<<r->search(r,"ds")<<endl;
	




}