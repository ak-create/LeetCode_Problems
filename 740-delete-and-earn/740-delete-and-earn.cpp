class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int>mp;
        vector<int>freq(1e4+1,0);
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
           freq[nums[i]]++;
        }
        auto it=mp.begin();
        // vector<int>pre(mp.size(),0);
        // pre[0]=it->first*it->second;
        // it++;
      //  int i=1;
        vector<int>po;
        while(it!=mp.end()){
            // pre[i]=it->first*it->second+((i-2<0)?0:pre[i-2]);
            po.push_back(it->first);
            it++;
            //i++;
        }
        
       vector<int>dp(mp.size(),0);
        dp[0]=po[0]*freq[po[0]];
        
        for(int i=1;i<mp.size();i++){
            if(po[i]-po[i-1]==1)
            dp[i]=max((i-2<0?0:dp[i-2])+po[i]*freq[po[i]],dp[i-1]);
            else
                dp[i]=(dp[i-1]+po[i]*freq[po[i]]);
        }
        return dp[mp.size()-1];
        
    }
};