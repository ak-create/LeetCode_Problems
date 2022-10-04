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
    
    bool dfs(TreeNode* root,int targetSum)
    {
         targetSum-=(root->val);
        if(root->left==NULL and root->right==NULL)
          return targetSum==0;
          bool ans=false;
          if(root->left)
              ans|=dfs(root->left,targetSum);
        if(root->right)
            ans|=dfs(root->right,targetSum);
       
        return ans;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL)
            return false;
        
       return dfs(root,targetSum);
        
    }
};