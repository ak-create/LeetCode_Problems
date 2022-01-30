class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        if(k>nums.size())
          k%=nums.size();
        
        for(int i=nums.size()-k;i<nums.size();i++)
            v.push_back(nums[i]);
        
        for(int j=0;j<nums.size()-k;j++)
            v.push_back(nums[j]);
        
        for(int i=0;i<v.size();i++)
            nums[i]=v[i];
        
        
    }
};