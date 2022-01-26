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
    void getall(TreeNode* root1,vector<int>& storeall){
        if(root1==NULL)
            return;
        
        storeall.push_back(root1->val);
        getall(root1->left,storeall);
        getall(root1->right,storeall);
        
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>storeall;
        getall(root1,storeall);
        getall(root2,storeall);
        sort(storeall.begin(),storeall.end());
        return storeall;
    }
};