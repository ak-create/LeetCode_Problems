class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(2,1));
        
        for(int i=1;i<n;i++)
        {
            for(int k=0;k<2;k++)
            {
                if(k==0)
                {
                    int j=i-1;
                    int mx=0;
                    while(j>=0)
                    {
                        if(nums[i]>nums[j])
                        mx=max(mx,dp[j][1]);
                        j--;
                    }  
                    dp[i][k]+=mx;
                }
                else
                {
                    int j=i-1;
                    int mx=0;
                    while(j>=0)
                    {
                        if(nums[i]<nums[j])
                        mx=max(mx,dp[j][0]);
                        j--;
                    }
                    dp[i][k]+=mx;
                }
            }
            
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max({ans,dp[i][0],dp[i][1]});
        }
        return ans;
        
    }
};