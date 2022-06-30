class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            sum+=abs(nums[i]-nums[n/2]);
        
      return sum;
    }
};