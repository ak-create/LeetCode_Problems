class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp;
       dp.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]>dp.back())
                dp.push_back(nums[i]);
            
            else if(lower_bound(dp.begin(),dp.end(),nums[i])!=dp.end()){
                 int ind=lower_bound(dp.begin(),dp.end(),nums[i])-dp.begin();
               // if(ind<dp.size())
                dp[ind]=nums[i];
                
            }
            
        }
        
        for(int ele:dp)
            cout<<ele<<" ";
        
        return dp.size();
   
    }
};