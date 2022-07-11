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
    
    vector<int> solve(TreeNode* root,vector<int>v){
      if(root==nullptr)
            return v;
        
      
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()==false)
        {
            int cnt=q.size();
           
            while(cnt>0){
                
                 TreeNode* curr=q.front();
                if(cnt==1)
               v.push_back(curr->val);
                
                q.pop();
                if(curr->left!=nullptr)
                    q.push(curr->left);
                if(curr->right!=nullptr)
                    q.push(curr->right);
                
                cnt--;
            }
          
            
            
        }
        return v;
    }
    vector<int> rightSideView(TreeNode* root) {
          vector<int>v;
       v= solve(root,v);
        return v;
    }
};