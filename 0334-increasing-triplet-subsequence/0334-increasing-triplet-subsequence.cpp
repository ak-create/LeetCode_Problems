class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool ans=false;
        vector<int>inc;
        inc.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>inc.back())
                inc.push_back(nums[i]);
            int ind=lower_bound(inc.begin(),inc.end(),nums[i])-inc.begin();
            inc[ind]=nums[i];
            if(inc.size()==3)
                return true;
        }
        return false;
    }
};