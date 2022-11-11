class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(auto x:nums)
            s.insert(x);
        
        int i=0;
        for(auto it:s)
        {
            nums[i++]=it;
        }
    return s.size();
    }
};