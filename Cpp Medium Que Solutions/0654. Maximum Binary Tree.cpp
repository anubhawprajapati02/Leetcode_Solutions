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
    TreeNode* tree(vector<int>v,int s,int e)
    {
        if(s>e)
        return NULL;
        int maxi,i;
        maxi=*max_element(v.begin()+s,v.begin()+e+1);
        TreeNode* r=new TreeNode(maxi);
        for(i=s;i<=e;i++)
        {
            if(v[i]==maxi)
            break;
        }
        r->left=tree(v,s,i-1);
        r->right=tree(v,i+1,e);
        return r;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return tree(nums,0,nums.size()-1);
    }
};
