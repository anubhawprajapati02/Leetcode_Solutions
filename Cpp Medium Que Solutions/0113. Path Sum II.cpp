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
    int s=0;
    void vec(TreeNode* r,vector<int>v,vector<vector<int>>&re,int t)
    {
        if(r==NULL)
        return;
        v.push_back(r->val);
        s=s+r->val;
        if(r->left==NULL && r->right==NULL && s==t)
        {
            re.push_back(v);
        }
        vec(r->left,v,re,t);
        vec(r->right,v,re,t);
        s-=r->val;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>r;
        vector<int>v;
        vec(root,v,r,targetSum);
        return r;
    }
};
