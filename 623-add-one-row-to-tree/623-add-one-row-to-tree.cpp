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
    void dfs(TreeNode* root,int val,int depth)
    {
        if(depth==1)
        {
            TreeNode* temp1=new TreeNode(val);
           // cout<<root->val<<endl;
            temp1->left=root->left;
            root->left=temp1;
            TreeNode* temp2=new TreeNode(val);
            temp2->right=root->right;
            root->right=temp2;
            return ;
        }
        if(root->left)
        dfs(root->left,val,depth-1);
        if(root->right)
        dfs(root->right,val,depth-1);
        
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth==1)
        {
            TreeNode* rooxt=new TreeNode(val);
            rooxt->left=root;
            return rooxt;
        }
        dfs(root,val,depth-1);
        return root;
        
    }
};