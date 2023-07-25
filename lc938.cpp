
#include<bits/stdc++.h>

using namespace std; 


 struct TreeNode {
    int val;
    TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int s =0;
        if(root->val>=low and root->val <=high){
            s = root->val;
        }
        
        return s + rangeSumBST(root->left,low,high) + rangeSumBST(root->right, low,high);
        
    }
};
int main(){
    
}
