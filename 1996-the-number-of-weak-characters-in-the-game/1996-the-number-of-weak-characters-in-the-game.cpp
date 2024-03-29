class Solution {
public:
    
    static bool mycmp(vector<int>&v1,vector<int>&v2)
     {
         if(v1[0]==v2[0])
             return v1[1]>v2[1];
         return v1[0]<v2[0];
     }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),mycmp);
        int n=properties.size();
        
        int mx=properties[n-1][1];
        int ans=0;
        for(int i=n-2;i>=0;i--)
        {
               if(properties[i][1]<mx)
                   ans++;
               else if(properties[i][1]>mx)
                   mx=properties[i][1];
               
           }
           
                
        
        return ans;
    }
};