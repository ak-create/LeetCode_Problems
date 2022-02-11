class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // if(k==0)
        //     return 1;
        
        int cum_sum=0;
        map<int,int>mp;
        int cnt=0;
        mp[0]++;
        for(int i=0;i<nums.size();i++){
            cum_sum+=nums[i];
            cnt+=mp[cum_sum-k];
              mp[cum_sum]++;
        }
        return cnt;
    }
};