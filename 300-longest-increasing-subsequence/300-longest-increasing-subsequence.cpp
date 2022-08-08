class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size()+1,1);
        int ans=1;
        for(int i=1;i<nums.size();i++)
        {
            int j=i-1;
            while(j>=0)
            {
                if(nums[i]>nums[j])
                    dp[i]=max(dp[j]+1,dp[i]);
                
                j--;
            }
            ans=max(ans,dp[i]);
        }
       return ans;
    }
};