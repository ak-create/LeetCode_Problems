class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       map<int,int>seen;
        seen[0]=-1;
        int cum_sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            cum_sum+=((nums[i]==0)?-1:1);
            
            if(seen.count(cum_sum)!=0)
                ans=max(ans,i-seen[cum_sum]);
            
            else
                seen[cum_sum]=i;
        }
        
        return ans;
    }
};