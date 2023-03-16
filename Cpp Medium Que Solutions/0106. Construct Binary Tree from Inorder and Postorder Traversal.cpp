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
    int i;
    void si(vector<int>n)
    {
    i=n.size()-1;
    }
    TreeNode* t(vector<int>in,vector<int>p,int s,int e)
    {
        if(s>e)
        return NULL;
        TreeNode* r=new TreeNode(p[i]);
        i--;
        int ind;
        for(int j=s;j<=e;j++)
        {
            if(r->val==in[j])
            {
                ind=j;
                break;
            }
        }
        r->right=t(in,p,ind+1,e);
        r->left=t(in,p,s,ind-1);
        return r;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int s=0,e;
        TreeNode* r;
        si(inorder);
        e=postorder.size()-1;
        r=t(inorder,postorder,s,e);
        return r;
    }
};
