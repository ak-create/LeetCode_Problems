class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
       // vector<int>v;
        int ans1=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target and ((mid-1>=0 and nums[mid-1]<target) or mid==0)){
                ans1=mid;
            break;}
            else if(nums[mid]<target)
                l=mid+1;
            else
                r=mid-1;
        }
          l=0;
        r=nums.size()-1;
        int ans2=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(nums[mid]==target and ((mid+1<nums.size() and nums[mid+1]>target) or mid==nums.size()-1)){
                ans2=mid;
            break;}
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
   return {ans1,ans2};
        
        
    }
};