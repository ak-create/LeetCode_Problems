class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
           dp[0][i]=matrix[0][i];
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int mn=1e8;
                if(j-1>=0)
                 mn=min(mn,matrix[i][j]+dp[i-1][j-1]);
                
                 mn=min(mn,matrix[i][j]+dp[i-1][j]);
                
                if(j+1<n)
                 mn=min(mn,matrix[i][j]+dp[i-1][j+1]);
                
                dp[i][j]=mn;
            }
        }
        int ans=1e8;
        for(int i=0;i<n;i++)
            ans=min(ans,dp[n-1][i]);
        
        return ans;
    }
};