class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
         vector<vector<int>>v;
     
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int left=j+1;
                int right=n-1;
                int need=target-(nums[i]+nums[j]);
                while(left<right)
                {
                    if(nums[left]+nums[right]>need)
                        right--;
                    else if(nums[left]+nums[right]<need)
                        left++;
                    else
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[left]);
                        temp.push_back(nums[right]);
                        v.push_back(temp);
                        
                         while(left<right and nums[left]==temp[2])left++;
                        
                          while(left<right and nums[right]==temp[3])right--;
                        
                    }
                        
                }
                
                while(j+1<n and nums[j+1]==nums[j])j++;
                
            }
             while(i+1<n and nums[i+1]==nums[i])i++;
         }
        
        return v;
    }
};