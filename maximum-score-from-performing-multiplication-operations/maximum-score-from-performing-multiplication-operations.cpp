class Solution {
public:
    int dp[1005][1005];
    int recdp(vector<int>&nums,vector<int>&multipliers,int i,int l){
        
        // if(l>r)
        //     return 0;
        if(i==multipliers.size())
            return 0;
        
        if(dp[i][l]!=-1)
            return dp[i][l];
        
        int opt1=multipliers[i]*nums[l]+recdp(nums,multipliers,i+1,l+1);
        int opt2=multipliers[i]*nums[nums.size()-(i-l)-1]+recdp(nums,multipliers,i+1,l);
        
        return dp[i][l]=max(opt1,opt2);
        
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        //int dp[m+5][m+5];
        memset(dp,-1,sizeof(dp));
       
        return recdp(nums,multipliers,0,0);
    }
};