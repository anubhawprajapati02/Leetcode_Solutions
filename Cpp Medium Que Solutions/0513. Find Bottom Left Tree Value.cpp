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
    int h=0;
    int traverse(TreeNode* r,int he,int &re)
    {
        if(r==NULL)
        return 0;
        traverse(r->left,he+1,re);
        if(h<he)
        {
            re=r->val;
            h=he;
        }
        traverse(r->right,he+1,re);
        return re;
    }
    int findBottomLeftValue(TreeNode* root) {
        int r=root->val;
        traverse(root,0,r);
        return r;
    }
};
