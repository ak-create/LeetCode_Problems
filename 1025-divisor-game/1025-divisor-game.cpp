class Solution {
public:
    int dp[1001];
    int rec(int curr)
    {
        if(curr==1)
            return 0;
        if(curr==2)
            return 1;
        if(dp[curr]!=-1)
            return dp[curr];
        
        int ans=0;
        for(int i=1;i<curr;i++)
        {
            if((curr%i)==0)
                ans+=(1-rec(curr-i));
        }
        if(ans>0)
            return dp[curr]=1;
        else
            return dp[curr]=0;
        
    }
    bool divisorGame(int n) {
     
        vector<vector<int>>v(1001);
        memset(dp,-1,sizeof(dp));
        // for(int i=2;i<=1000;i++)
        // {
        //     for(int j=i;j<=1000;j+=i)
        //     v[i].pb(j);
        // }
      int ans=rec(n);
      if(ans)
          return true;
        else
            return false;
    }
};