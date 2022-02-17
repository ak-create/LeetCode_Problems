class Solution {
public:
    vector<vector<int>>ans;
    
    void rec(vector<int>& candidates, vector<int>& v, int ind, int target){
        
        if(target==0){
            ans.push_back(v);
            return;}
        
        else if(ind>=candidates.size()||target<0)
            return;
        
        
  else{
      // for(int i=ind; i<candidates.size();i++){
        v.push_back(candidates[ind]);
        rec(candidates,v,ind,target-candidates[ind]);
        v.pop_back();
        rec(candidates,v,ind+1,target);
        }
        
    // }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        rec(candidates,v,0,target);
        return ans;
    }
};