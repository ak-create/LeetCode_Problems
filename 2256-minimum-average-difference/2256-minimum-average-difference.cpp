class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        vector<long long int>sum(nums.size()+1,0);
        sum[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            sum[i]=sum[i-1]+nums[i];
        }
        int ans=1e8,ind=0;
        for(int i=0;i<nums.size();i++)
        {
        int f= sum[i]/(i+1);
            int s=0;
            if(i!=nums.size()-1)
            s=(sum[nums.size()-1]-sum[i])/(nums.size()-(i+1))  ;
            int t=abs(f-s);
            if(t<ans)
            {
                ans=t;
                ind=i;
            }
        }
        
        return ind;
    }
};