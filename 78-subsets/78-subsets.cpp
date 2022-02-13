class Solution {
public:
        vector<vector<int>>ans;
    void rec(vector<int>&an,vector<int>&nums,int ind){
        if(ind==nums.size())
        {
        ans.push_back(an);
         return;   
         }
        
        an.push_back(nums[ind]);
        rec(an,nums,ind+1);
        an.pop_back();
         rec(an,nums,ind+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>an;
        rec(an,nums,0);
        return ans;
    }
};