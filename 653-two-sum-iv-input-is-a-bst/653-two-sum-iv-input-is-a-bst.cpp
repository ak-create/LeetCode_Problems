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
    void dfs(TreeNode* root,multiset<int>&s)
    {
        if(root)
        {
            s.insert(root->val);
            if(root->left)
                dfs(root->left,s);
            if(root->right)
                dfs(root->right,s);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        multiset<int>s;
        dfs(root,s);
       // cout<<s.size()<<endl;
        vector<int>v;
        for(auto it:s)
            v.push_back(it);
    
        for(auto x:v)
        {
            s.erase(s.find(x));
             if(s.find(k-x)!=s.end())
                return true;
            s.insert(x);
        }
        return false;
    }
};