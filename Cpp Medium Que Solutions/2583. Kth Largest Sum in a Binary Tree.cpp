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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        int i;
        vector<long long>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* t;
            t=q.front();
            long long s=q.size(),sum=0;
            for(i=0;i<s;i++)
            {
                t=q.front();
                q.pop();
                sum=sum+t->val;
                if(t->left!=NULL)
                q.push(t->left);
                if(t->right!=NULL)
                q.push(t->right);
            }
            v.push_back(sum);
        }
        sort(v.begin(),v.end());
        if(v.size()>=k)
        return v[v.size()-k];
        return -1;
    }
};
