#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root)
    {
        stack<TreeNode *> q;

        vector<vector<int>> v;
        stack<vector<int>> tv;
        if (root == NULL)
        {
            return v;
        }else{
            q.push(root);
        }
        while (!q.empty())
        {
            int s = q.size();
            vector<int> temp;

            for (size_t i = 0; i < s; i++)
            {
            TreeNode *tempr = q.top();
            q.pop();
            
            
            
            
            if(tempr->left != NULL){
                q.push(tempr->left);
            }
            if(tempr->right!=NULL){
                q.push(tempr->right);
            }
            temp.push_back(tempr->val);
            }
            tv.push(temp);

        }
        while (!tv.empty())
        {
            v.push_back(tv.top());
            tv.pop();
        }
        
        
        
    }
};

int main()
{

}