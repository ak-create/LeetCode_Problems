class Solution {
public:
    bool winnerSquareGame(int n) {
        vector<long long>sq(n+1,0);

        for(long long i=1;i<n;i++){
            if(i*i<=n)
                sq[i*i]=1;
        }
        
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
            if(flag)
            dp[i]=1;
            else
                dp[i]=0;
        }
        return dp[n];
        
        
        
    }
};