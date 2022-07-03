class Solution {
public:
    vector<vector<int>>global;
    void rec(vector<int>& candidates,vector<int>& local,int ind ,int sum,int target)
    {
        if(ind==candidates.size())
        {
            if(sum==target)
                global.push_back(local);
            
            return;
        }
        if(sum>target)
            return ;
        
        sum+=candidates[ind];
        local.push_back(candidates[ind]);
        rec(candidates,local,ind,sum,target);
        sum-=candidates[ind];
        local.pop_back();
        rec(candidates,local,ind+1,sum,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>local;
        rec(candidates,local,0,0,target);
        return global;
    }
};