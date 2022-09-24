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
    void dfs(TreeNode* root,vector<int>&p,int sum,int targetSum,vector<vector<int>>&path)
    {
        if(root->left==NULL and root->right==NULL)
        {
            if(sum==targetSum)
            path.push_back(p);
            return;
        }
        if(root->left){
      sum+=root->left->val;
      p.push_back(root->left->val);
      dfs(root->left,p,sum,targetSum,path);
      sum-=root->left->val;
      p.pop_back();
        }
        if(root->right){
      sum+=root->right->val;
      p.push_back(root->right->val);
      dfs(root->right,p,sum,targetSum,path);
       sum-=root->right->val;
      p.pop_back();}
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>path;
        if(!root)
            return path;
        vector<int>p;
        p.push_back(root->val);
        dfs(root,p,root->val,targetSum,path);
        return path;
    }
};