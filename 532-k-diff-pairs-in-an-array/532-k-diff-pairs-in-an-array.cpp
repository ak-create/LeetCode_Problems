class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>unique_nums;
        for(int i=0;i<nums.size();i++){
            unique_nums[nums[i]]++;
        }
        int ans=0;
       auto it=unique_nums.begin();
        while(it!=unique_nums.end()){
            if(unique_nums.count(k+it->first)){
                if(k==0&&unique_nums[it->first]>1)
                    ans++;
                else if(k!=0)
                    ans++;
            }
              if(unique_nums.count(it->first-k)){
                   if(k==0&&unique_nums[it->first]>1)
                    ans++;
                else if(k!=0)
                    ans++;
              }
        
       it++; }
        return ans/2;
    }
};