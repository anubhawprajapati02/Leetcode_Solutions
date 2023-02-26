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
    int i=0;
    TreeNode* tree(vector<int>p,vector<int>in,int s,int e)
    {
        if(s>e)
        return NULL;
        TreeNode* n=new TreeNode(p[i]);
        i++;
        int ind;
        for(int j=s;j<=e;j++)
        {
            if(in[j]==n->val)
            {
                ind=j;
                break;
            }
        }
        n->left=tree(p,in,s,ind-1);
        n->right=tree(p,in,ind+1,e);
        return n;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* r;
        int s=0,e;
        e=preorder.size()-1;
        r=tree(preorder,inorder,s,e);
        return r;
    }
};
