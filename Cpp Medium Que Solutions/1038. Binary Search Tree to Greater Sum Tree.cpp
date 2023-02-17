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
    void in(TreeNode* r,vector<int>&v)//inorder traversal for arranging the elements in ascending order
    {
        if(r==NULL)
        return;
        in(r->left,v);
        v.push_back(r->val);
        in(r->right,v);
    }
    void re(TreeNode* &r,unordered_map<int,int>m)//replacing elements with sum of all greater element than current node
    {
        if(r==NULL)
        return;
        else
        r->val=m[r->val];
        re(r->left,m);
        re(r->right,m);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>v;
        unordered_map<int,int>m;
        int s=0,i;
        in(root,v);
        sort(v.begin(),v.end());
        for(i=v.size()-1;i>=0;i--)//for mapping the element with sum
        {
            int c=v[i];
            s=s+v[i];
            v[i]=s;
            m[c]=v[i];
        }
        re(root,m);
        return root;
    }
};
