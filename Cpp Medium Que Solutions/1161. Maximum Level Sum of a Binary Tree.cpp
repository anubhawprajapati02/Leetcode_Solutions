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
    int maxLevelSum(TreeNode* root) {
        vector<vector<int>>r;
        vector<int>v;
        unordered_map<int,int>m;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* n;
                n=q.front();
                q.pop();
                if(n->left!=NULL)
                q.push(n->left);
                if(n->right!=NULL)
                q.push(n->right);
                v.push_back(n->val);
            }
            r.push_back(v);
            v.clear();
        }
        int i,j,s=0,max=INT_MIN;
        for(i=0;i<r.size();i++)
        {
            s=0;
            for(j=0;j<r[i].size();j++)
            {
                s=s+r[i][j];
            }
            if(!m.count(s))
            m[s]=i+1;
            if(max<s)
            max=s;
        }
        return m[max];
    }
};
