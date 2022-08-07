class Solution {
public:
    const int mod=1e9+7;
    
    int countVowelPermutation(int n) {
        vector<vector<long long int>>dp(n+1,vector<long long int>(26,0));
        dp[0][0]=1,dp[0][4]=1,dp[0][8]=1,dp[0][14]=1,dp[0][20]=1;
        
        for(int i=1;i<n;i++)
        {
            dp[i][0]=dp[i-1][4]%mod;
            dp[i][4]=(dp[i-1][0]+dp[i-1][8])%mod;
            dp[i][8]=(dp[i-1][0]+dp[i-1][4]+dp[i-1][14]+dp[i-1][20])%mod;
            dp[i][14]=(dp[i-1][8]+dp[i-1][20])%mod;
            dp[i][20]=dp[i-1][0]%mod;
        }
        
       long long int ans=0;
        ans=((((dp[n-1][0]+dp[n-1][4])%mod+dp[n-1][8])%mod+dp[n-1][14])%mod+dp[n-1][20])%mod;
        return ans;
    }
};