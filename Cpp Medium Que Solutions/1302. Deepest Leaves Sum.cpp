/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int i,s=0;
        queue<TreeNode*>q;
        vector<int>v;
        vector<vector<int>>r;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(i=0;i<n;i++)
            {
                TreeNode* t=q.front();
                v.push_back(t->val);
                if(t->left!=NULL)
                q.push(t->left);
                if(t->right!=NULL)
                q.push(t->right);
                q.pop();
            }
            r.push_back(v);
            v.clear();
        }
        for(i=0;i<(r[r.size()-1]).size();i++)
        {
            s=s+r[r.size()-1][i];
        }
        return s;
    }
};
