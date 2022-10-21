class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]].push_back(i);
        
        for(auto it:mp)
        {
            for(int i=1;i<it.second.size();i++)
            {
                if(abs(it.second[i]-it.second[i-1])<=k)
                    return true;
            }
        }
        return false;
    }
};