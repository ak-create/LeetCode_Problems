class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       vector<int>v;
        int ans=1;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
          int ind=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
            if(ind==v.size())
                v.push_back(nums[i]);
            else
                v[ind]=nums[i];
                
          
        }
       return v.size();
    }
};