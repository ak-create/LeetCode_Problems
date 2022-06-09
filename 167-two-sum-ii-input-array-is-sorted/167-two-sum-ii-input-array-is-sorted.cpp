class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        for(int i=0;i<numbers.size();i++)
        {
            int find=target-numbers[i];
           if(lower_bound(numbers.begin(),numbers.end(),find)!=numbers.end())
           {
                int ind=lower_bound(numbers.begin(),numbers.end(),find)-numbers.begin();
               if(ind!=i and numbers[ind]==find)
               {
                   if(i+1<ind+1){
                   ans.push_back(i+1);
                   ans.push_back(ind+1);}
                   else
                   {
                         ans.push_back(ind+1);
                   ans.push_back(i+1);
                   }
                   return ans;
               }
           }
        }
        return ans;
    }
};