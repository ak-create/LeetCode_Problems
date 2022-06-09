class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele1=-1,ele2=-1,cnt1=0,cnt2=0;
        
        for(int num:nums)
        {
            if(ele1==num)cnt1++;
            else if(ele2==num)cnt2++;
            else if(cnt1==0)
            {
                ele1=num;
                cnt1++;
            }
            else if(cnt2==0)
            {
                ele2=num;
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0,cnt2=0;
        for(int num:nums)
        {
            if(ele1==num)cnt1++;
            if(ele2==num)cnt2++;
    
        }
        
        if(cnt1>n/3 and cnt2>n/3 and ele1!=ele2)
            return {ele1,ele2};
        else if(cnt1>n/3)
            return {ele1};
        else if(cnt2>n/3)
            return {ele2};
        else
            return {};
    }
};