class Solution {
public:
    int dp[32][5000];
    const int mod=1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=k;i++)
            dp[1][i]=1;
        
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<5000;j++)
            {
                int x=0;
                for(int l=1;l<=k;l++)
                {
                    if(j-l>=1)
                        dp[i][j]=(dp[i][j]+dp[i-1][j-l])%mod;
                }
               
            }
        }
        
        int ans=0;
       return dp[n][target]%mod;
    }
};