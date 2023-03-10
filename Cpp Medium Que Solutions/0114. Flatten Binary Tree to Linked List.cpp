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
    void pre(TreeNode* r,vector<int>&v)
    {
        if(r==NULL)
        return;
        v.push_back(r->val);
        pre(r->left,v);
        pre(r->right,v);
    }
    void flatten(TreeNode* root) {
        vector<int>v;
        pre(root,v);
        TreeNode* r,*p;
        p=root;
        for(int i=1;i<v.size();i++)
        {
            if(p==NULL)
            {
                r=new TreeNode(v[0]);
                p=r;
            }
            else
            {
                r=new TreeNode(v[i]);
                p->left=nullptr;
                p->right=r;
                p=p->right;
            }
        }
    }
};
