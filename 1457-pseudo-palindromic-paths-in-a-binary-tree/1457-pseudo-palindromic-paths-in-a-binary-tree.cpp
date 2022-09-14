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
    int ans;
    bool is_pseudopalind(vector<int>&path)
    {
        int odd_cnt=0;
       // cout<<"new"<<endl;
        for(int i=1;i<=9;i++)
        {
            odd_cnt+=(path[i]%2);
          //  cout<<i<<":"<<path[i]<<endl;
            
        }
        
        return odd_cnt<=1;
    
    }
    void dfs(TreeNode* root,vector<int>&path)
    {
        if(root->left==NULL and root->right==NULL)
        {
            path[root->val]++;
            if(is_pseudopalind(path))
                ans++;
            path[root->val]--;
            return;
        }
         path[root->val]++;
        if(root->left)
        dfs(root->left,path);
        if(root->right)
        dfs(root->right,path);
        path[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        
        ans=0;
        vector<int>path(10,0);
        dfs(root,path);
        return ans;
    }
};