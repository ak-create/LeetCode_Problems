class Solution {
public:
    int dp[101];
    
    int recdp(vector<int>&nums,int i,int n){
        // if(i<0)
        //     return ;
        if(i==0)
            return nums[0];
        if(i==1)
            return max(nums[0],nums[1]);
        
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(recdp(nums,i-2,n)+nums[i],recdp(nums,i-1,n));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
       return recdp(nums,n-1,n);
    }
};