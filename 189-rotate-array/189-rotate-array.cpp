class Solution {
public:
    void rev(vector<int>&nums, int i, int k){
        while(i<=k){
            swap(nums[i],nums[k]);
            i++;k--;
        }
    }
    
    
    void rotate(vector<int>& nums, int k) {
    int n=nums.size();
        if(k>nums.size())
          k%=nums.size();
        
        rev(nums,0,n-k-1);
        rev(nums,n-k,n-1);
        rev(nums,0,n-1);

        
        
    }
};