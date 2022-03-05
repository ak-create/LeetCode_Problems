class Solution {
public:
    
    int deleteAndEarn(vector<int>& nums) {
        vector<int>freq(1e5,0);
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int>dp(1e5,0);
        dp[1]=freq[1];
        for(int i=2;i<1e5;i++){
            dp[i]=max((freq[i]*i)+dp[i-2],dp[i-1]);
          //  cout<<dp[i]<<" ";
        }
        //cout<<endl;
        return max(dp[1e5-1],dp[1e5-2]);
    }
};