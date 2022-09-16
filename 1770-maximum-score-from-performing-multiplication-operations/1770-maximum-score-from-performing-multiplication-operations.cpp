class Solution {
public:
    int ans;
    int dp[1005][1005];
    int rec(int st,int ed,int ind,vector<int>&nums,vector<int>&multipliers)
    {
     // int ed=(multipliers.size()+nums.size())-(st+ind);
        if(st>ed)
            return 0;
        
        if(ind==multipliers.size())
            return 0;
        
        if(dp[st][ind]!=1e9)
            return dp[st][ind];
        
        int val1=(nums[st]*multipliers[ind])+rec(st+1,ed,ind+1,nums,multipliers);
        int val2=(nums[ed]*multipliers[ind])+rec(st,ed-1,ind+1,nums,multipliers);
        return dp[st][ind]=max(val1,val2);
        
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int score=0;
        ans=0;
        for(int i=0;i<1002;i++)
        {
            for(int j=0;j<1003;j++)
                dp[i][j]=1e9;
        }
      return  rec(0,nums.size()-1,0,nums,multipliers);
       // return ans;
        
    }
};