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
    void vec(TreeNode* r,vector<string>&s,string st)
    {
        if(r==NULL)
        return;
        if(st=="")
        st=to_string(r->val);
        else
        {
            st=st+"->"+to_string(r->val);
        }
        if(r->left==NULL && r->right==NULL)
        {
            s.push_back(st);
        }
        vec(r->left,s,st);
        vec(r->right,s,st);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>s;
        string st;
        vec(root,s,st);
        return s;
    }
};
