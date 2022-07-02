// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subsetSums(vector<int>&arr,vector<int>&ans,int ind,int sum,int N)
    {
        if(ind==N)
        {
            ans.push_back(sum);
            return;
        }
        // ans.push_back(sum);
         subsetSums(arr,ans,ind+1,sum,N);
         subsetSums(arr,ans,ind+1,sum+arr[ind],N);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        subsetSums(arr,ans,0,0,N);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends