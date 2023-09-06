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
    int maxLevelSum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        map<int, int> ma;
        queue<pair<TreeNode *, int>> q;
        q.push(make_pair(root, 1));
        while (!q.empty())
        {
            TreeNode *temp = q.front().first;
            int templevel = q.front().second;
            q.pop();
            ma[templevel] += temp->val;
            if (temp->left != NULL)
            {
                q.push(make_pair(temp->left, templevel + 1));
            }
            if (temp->right != NULL)
            {
                q.push(make_pair(temp->right, templevel + 1));
            }
        }
        int maxx =0;
        int maxxlevel =1;

        for (auto &&i : ma)
        {
            if(i.second>maxx){
                maxx = i.second;
                maxxlevel = i.first;
            }
            
        }
        return maxxlevel;
        
    }
};

int main()
{
    INT_MIN
}