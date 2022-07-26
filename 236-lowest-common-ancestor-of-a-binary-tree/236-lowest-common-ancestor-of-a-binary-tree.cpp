/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void path(TreeNode* root, TreeNode* req, vector<TreeNode*>&p,int &flag1)
    {
        if(root==NULL)
            return;
        
        p.push_back(root);
        
        if(root->val==req->val){
            flag1=1;
            return ;}
        
        path(root->left,req,p,flag1);
        path(root->right,req,p,flag1);
        if(flag1==1)
            return ;
        
        p.pop_back();
        
        return ;
        
        
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        vector<TreeNode*>path1,path2;
        int flag1=0,flag2=0;
        path(root,p,path1,flag1);
        path(root,q,path2,flag2);
        int i=0;
          TreeNode* lca=NULL;
        while(i<min(path1.size(),path2.size()))
        {
            if(path1[i]==path2[i])
                lca=path1[i];
            else
                break;
            
                i++;
        }
        
        return lca;
        
    }
};