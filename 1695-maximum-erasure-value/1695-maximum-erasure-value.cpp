class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int>mp;
        int ans=0,temp=0;
        int j=0;
        vector<int>pre(nums.size(),0);
        pre[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i=0;i<nums.size();i++)
        { 
            if(mp.find(nums[i])==mp.end()){
            mp[nums[i]]=i;
            temp+=nums[i];
            }
            else if(mp[nums[i]]>=j)
            {
                int ind=mp[nums[i]];
                temp-=pre[ind]-(j==0?0:pre[j-1]);
                temp+=nums[i];
                mp[nums[i]]=i;
                j=ind+1;
            }
            else
            {
                 temp+=nums[i];
                mp[nums[i]]=i;
            }
            ans=max(ans,temp);
        }
        return ans;
    }
};
// 2 5 2 6 2 5 7 2 2 8