class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];
            int cnt=1;
            int j=i+1;
            for(j=i+1;j<nums.size();j++){
                if(nums[j]!=cnt+x)
                    break;
                
                cnt++;
            }
            if(j-i>=2){
                string put="";
                    put+=(to_string(x));
                    put+=("->");
                    put+=(to_string(nums[j-1]));
                
                ans.push_back(put);
            }
            else{
                 string put="";
                    put+=(to_string(x));
                  //  put+=""";
                ans.push_back(put);
            }
            i=j-1;
            
        }
        return ans;
    }
};