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
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>v,r;
        int i;
        unordered_map<int,int>m;
        in(root,v);
        for(i=0;i<v.size();i++)
        m[v[i]]++;
        for(auto x:m)
        r.push_back(x.first);
        sort(r.begin(),r.end());
        if(r.size()>1)
        return r[1];
        return -1;
    }
};
