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
    void in(TreeNode* r,vector<int>&v)
    {
        if(r==NULL)
        return;
        in(r->left,v);
        v.push_back(r->val);
        in(r->right,v);
    }
    void del(TreeNode* &r,int t)
    {
        if(r==NULL)
        return;
        if(r->val==t && r->left==NULL && r->right==NULL)
        {
            r=NULL;
            return;
        }
        del(r->left,t);
        del(r->right,t);
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        vector<int>v;
        in(root,v);
        int i;
        unordered_map<int,int>m;
        for(i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        for(i=0;i<m[target];i++)
        {
            del(root,target);
        }
        return root;
    }
};
