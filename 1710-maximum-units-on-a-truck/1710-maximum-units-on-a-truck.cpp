class Solution {
public:
    static bool mysort(vector<int>&v1,vector<int>&v2)
    {
      
        return v1[1]>v2[1];        
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
       // vector<double>best(n,0);
        sort(boxTypes.begin(),boxTypes.end(),mysort);
        int i=0;
        int ans=0;
        while(truckSize and i<n)
        {
         //   cout<<boxTypes[i][0]<<" "<<boxTypes[i][1]<<endl;
            if(truckSize>=boxTypes[i][0]){
            ans+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            else
            {
                ans+=(truckSize*boxTypes[i][1]);
                break;
            }
            i++;
           // cout<<ans<<endl;
        }
      //  cout<<endl;
        return ans;
    }
};