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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        queue<pair<TreeNode*,long int>>q;
        q.push({root,0});
        long int ans=0;
        long int first,last,mmin=0;
        while(!q.empty())
        {
            int sz=q.size();
            mmin=q.front().second;
            for(int i=0;i<sz;i++)
            {
                long int curr_ind=q.front().second-mmin;
                TreeNode* curr_node=q.front().first;
                q.pop();
                if(i==0)first=curr_ind;
                if(i==sz-1)last=curr_ind;
                
                if(curr_node->left)
                    q.push({curr_node->left,2*curr_ind+1});
                 if(curr_node->right)
                    q.push({curr_node->right,2*curr_ind+2});
                
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};