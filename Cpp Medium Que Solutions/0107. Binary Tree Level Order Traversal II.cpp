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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>r;
        vector<int>v;
        queue<TreeNode*>q;
        if(root==NULL)
        return r;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* n;
                n=q.front();
                q.pop();
                if(n->left!=NULL)
                q.push(n->left);
                if(n->right!=NULL)
                q.push(n->right);
                v.push_back(n->val);
            }
            r.push_back(v);
            v.clear();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};
