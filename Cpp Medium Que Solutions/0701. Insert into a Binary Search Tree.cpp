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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        {
            TreeNode* n;
            n=new TreeNode(val);
            root=n;
            return root;
        }
        else
        {
            if(val>root->val && root->right!=NULL)
            insertIntoBST(root->right,val);
            if(val>root->val && root->right==NULL)
            {
                TreeNode* n;
                n=new TreeNode(val);
                root->right=n;
                return root;
            }
            if(val<root->val && root->left!=NULL)
            insertIntoBST(root->left,val);
            if(val<root->val && root->left==NULL)
            {
                TreeNode* n;
                n=new TreeNode(val);
                root->left=n;
                return root;
            }
        }
        return root;
    }
};
