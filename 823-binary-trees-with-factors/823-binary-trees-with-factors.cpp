class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        vector<long long int>prod;
        sort(arr.begin(),arr.end());
        unordered_map<int,int>s;
        for(int i=0;i<arr.size();i++)
        {
            s[arr[i]]=i;
            // for(int j=i;j<arr.size();j++)
            // {
            //     prod.push_back((long long int )arr[i]*arr[j]);
            // }
        }
        vector<long long int>dp(arr.size()+1,1);
        const int mod=1e9+7;
        dp[0]=1;
        long long int ans=1;
        for(int i=1;i<arr.size();i++)
        {
            long long int temp=1;
            for(int j=i;j>=0;j--)
            {
                if(s.find(arr[i]/arr[j])!=s.end() and arr[i]%arr[j]==0)
                    temp+=(dp[j]*dp[s[arr[i]/arr[j]]])%mod;
            }
           dp[i]=(temp)%mod;
            ans+=(temp)%mod;
        }
        
        return ans%mod;
        
        
        
    }
};