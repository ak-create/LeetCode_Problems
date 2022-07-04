class Solution {
public:
    void rec(int ind,vector<int>&ds, vector<vector<int>>& ans, vector<int>& nums)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[i],nums[ind]);
            rec(ind+1,ds,ans,nums);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        rec(0,ds,ans,nums);
        return ans;
    }
};