class Solution {
public:
    bool winnerSquareGame(int n) {
      
        vector<int>dp(n+5,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=0;
        
        for(int i=3;i<=n;i++)
        {
            int flag=0;
            for(int j=1;j*j<=i;j++){
                if(dp[i-(j*j)]==0){
                    flag=1;
                    break;
                }
                    
            }
            dp[i]=(flag==1)?1:0;
        }
        return dp[n];
        
        
        
    }
};