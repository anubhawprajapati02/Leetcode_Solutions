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
    void in(TreeNode* r,int &re,int t)
    {
        if(r==NULL)
        return;
        s=s+r->val;
        if(r->left==NULL && r->right==NULL && s==t)
        {
            re=1;
            return;
        }
        in(r->left,re,t);
        in(r->right,re,t);
        s-=r->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int r=0;
        in(root,r,targetSum);
        return r;
    }
};
