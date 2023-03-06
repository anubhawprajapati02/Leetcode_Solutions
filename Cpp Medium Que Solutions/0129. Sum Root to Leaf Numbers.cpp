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
    void sum(TreeNode* r,int &re,int s)
    {
        if(r==NULL)
        return;
        s=s*10+r->val;
        if(r->left==NULL && r->right==NULL)
        {
            re=re+s;
        }
        sum(r->left,re,s);
        sum(r->right,re,s);
    }
    int sumNumbers(TreeNode* root) {
        int r=0,s=0;
        sum(root,r,s);
        return r;
    }
};
