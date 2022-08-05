class Solution {
public:
    int rec(int ind,int sum,vector<int>&nums,int target,vector<int>&dp)
    {
        if(sum>target)
            return 0;
        
        if(target==sum)
            return 1;
        
        if(dp[sum]!=-1)
            return dp[sum];
            
        int ways=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            ways+=rec(ind,sum,nums,target,dp);
            sum-=nums[i];
        }
        return dp[sum]= ways;
        
    }
    
    int combinationSum4(vector<int>& nums, int target) {
        //set<vector<int>>ans;
        int sum=0;
        vector<int>dp(target+1,-1);
       return rec(0,sum,nums,target,dp);
       
       // return ans.size();
    }
};