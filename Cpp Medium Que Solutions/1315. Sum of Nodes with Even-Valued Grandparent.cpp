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
    int sumvalue=0;
    void in(TreeNode* r)
    {
        if(r==NULL)
        return;
        if(r->val%2==0)
        sum(r,sumvalue);
        in(r->left);
        in(r->right);
    }
    void sum(TreeNode* r,int &sumval)
    {
        if(r->left!=NULL)
        {
            if(r->left->left!=NULL)
            sumval+=r->left->left->val;
            if(r->left->right!=NULL)
            sumval+=r->left->right->val;
        }
        if(r->right!=NULL)
        {
            if(r->right->left!=NULL)
            sumval+=r->right->left->val;
            if(r->right->right!=NULL)
            sumval+=r->right->right->val;
        }
    }
    int sumEvenGrandparent(TreeNode* root) {
        in(root);
        return sumvalue;
    }
};
