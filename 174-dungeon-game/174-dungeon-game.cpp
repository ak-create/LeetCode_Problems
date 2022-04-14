class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int ans=INT_MAX;
        int n=dungeon.size(),m=dungeon[0].size();
        vector<vector<int>>dp(n+2,vector<int>(m+2,0));
        vector<vector<int>>pd(n+2,vector<int>(m+2,0));
        dp[1][0]=0;
        dp[0][1]=0;
        
        
        for(int i=n;i>=1;i--){
            for(int j=m;j>=1;j--){
               // if(i==1&&j==1)continue;
                int val=max(dp[i+1][j],dp[i][j+1])+dungeon[i-1][j-1];
                if(i==n or j==m)
                    val=min(dp[i+1][j],dp[i][j+1])+dungeon[i-1][j-1];
                dp[i][j]=min(0,val);
                //pd[i][j]=max(dp[i-1][j],dp[i][j-1])+dungeon[i][j];
              // cout<<dp[i][j]<<" ";
            }
          // cout<<endl;
        }
        
//         int mn=1e9;
//         int i=n,j=m;
//         while(i>=1&&j>=1)
//         {
//             mn=min(mn,dp[i][j]);
            
//             if(dp[i-1][j]>dp[i][j-1])
//                 i--;
//             else
//                 j--;
            
//         }
        
        return abs(dp[1][1])+1;
        
    }
};