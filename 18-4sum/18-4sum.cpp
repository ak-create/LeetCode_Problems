class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
            sort(nums.begin(),nums.end());
        unordered_map<long long int,int>mp;
       set<vector<int>>ss;
        for(int  i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(mp.find(target-(long long int)((long long int)nums[i]+(long long int)nums[j]+(long long int)nums[k]))!=mp.end())
                    {
                        if(mp[target-(nums[i]+nums[j]+nums[k])]!=i and mp[target-(nums[i]+nums[j]+nums[k])]!=j and mp[target-(nums[i]+nums[j]+nums[k])]!=k)
                        {
                            vector<int>temp;
                            temp.push_back(nums[i]);
                             temp.push_back(nums[j]);
                             temp.push_back(nums[k]);
                             temp.push_back(target-(nums[i]+nums[j]+nums[k]));
                             sort(temp.begin(),temp.end());
                                ss.insert(temp);
                                
                            }
                            
                        }
                    }
                }
            }
        
      vector<vector<int>>v (ss.begin(),ss.end());
        return v;
    }
};