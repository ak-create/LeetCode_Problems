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
    void rec(TreeNode* root, vector<int>&inorder)
    {
        if(!root)
            return ;
        rec(root->left,inorder);
        inorder.push_back(root->val);
        rec(root->right,inorder);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        rec(root,inorder);
        return inorder;
    }
};