class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
       // int dp[d+1][n+1];
        vector<vector<int>>dp(d+1,vector<int>(n+1,INT_MAX));
       // memset(dp,1e9,sizeof(dp));
        if(d>n)
            return -1;
         int mx=0;
                   
                    for(int i=0;i<n;i++){
                        mx=max(mx,jobDifficulty[i]);
                        dp[1][i+1]=mx;
                    }
      
       
            for(int j=2;j<=d;j++){
                for(int i=j;i<=n;i++){
                    int mx=0;
                    for(int k=i-1;k>=j-1;k--){
                        mx=max(mx,jobDifficulty[k]);
                        // cout<<"comp:"<<dp[j][i]<<" "<<mx+dp[j-1][k]<<" "<<endl;
                        dp[j][i]=min(dp[j][i],dp[j-1][k]+mx);
                        // cout<<dp[j][i]<<" ";
                    }
//                     cout<<"final"<<dp[j][i]<<endl;
                    
//                     int mx=0;
//                     vector<int>temp;
//                     for(int k=i;k>=j;k--){
//                         mx=max(mx,jobDifficulty[k-1]);
//                         temp.push_back(mx);
//                     }
//                     int prev_optstate=INT_MAX;
                    
//                     for(int l=i-1;l>=j;l--){
//                         prev_optstate=min(prev_optstate,dp[j-1][l]+temp[i-l]);
//                     }
//                     if(prev_optstate==INT_MAX)
//                         dp[j][i]=dp[j-1][i-1]+jobDifficulty[i-1];
//                     else
//                     dp[j][i]=prev_optstate+mx;
                    
                    // dp[j][i]=dp[j-1][i-1]+jobDifficulty[i-1];
                }
                
                
            }
        
//         for(int j=1;j<=d;j++){
//             for(int i=1;i<=n;i++)
//                 cout<<dp[j][i]<<" ";
            
//             cout<<endl;
//         }
//         int ans=INT_MAX;
//         for(int i=d;i<=n;i++){
//             ans=min(ans,dp[d][i]);
//         }
        return dp[d][n];
    }
};