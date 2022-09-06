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
    bool pruning(TreeNode* root)
    {
        if(root==NULL)
            return 0;
          bool val_l=pruning(root->left);
          bool val_r=pruning(root->right);
        if(!val_l)
            root->left=NULL;
        if(!val_r)
            root->right=NULL;
         return root->val|val_l|val_r;
        
    }
    TreeNode* pruneTree(TreeNode* root) {
        // if(root==NULL)
        //     return NULL;
        if(pruning(root))
            return root;
        else
            return NULL;
    }
};