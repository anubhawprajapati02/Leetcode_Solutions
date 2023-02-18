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
    void tree(TreeNode* &r)
    {
        if(r==NULL || (r->left==NULL && r->right==NULL))
        return;
        swap(r->left,r->right);
        tree(r->left);
        tree(r->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        tree(root);
        return root;
    }
};
