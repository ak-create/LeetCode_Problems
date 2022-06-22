class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());
    int i=nums.size()-1;
        for(i=nums.size()-1;i>=0 and --k>0;i--)
        {}
           
            return nums[i];
    }
    
};