class Solution {
public:
        vector<vector<int>>global;
    void rec(vector<int>& candidates,vector<int>& local,int ind ,int target)
    {
        
            if(target==0)
                global.push_back(local);
            

        
        
        for(int i=ind;i<candidates.size();i++){
            if(candidates[i]>target)
                break;
            
            if(i>ind and candidates[i]==candidates[i-1])
                continue;

        local.push_back(candidates[i]);
        rec(candidates,local,i+1,target-candidates[i]);
        local.pop_back();
        }
       
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>local;
        rec(candidates,local,0,target);
        return global;
    }
   
};